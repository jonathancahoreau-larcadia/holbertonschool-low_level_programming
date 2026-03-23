# Memory Maps

1. Methodology
- Programs analyzed: stack_example.c, heap_example.c, aliasing_example.c.
- Compilation performed in programs/ using make with the provided flags.
- Normal execution (without Valgrind) to observe real behavior.
- Selected observation points:
- Function entry and exit
- Heap allocations and deallocations
- Pointer assignments and reassignments
- Use of an AI tool to generate preliminary memory maps.
- Systematic manual verification:
- Explicit distinction between stack and heap
- Correct object lifetimes
- Accurate pointer aliasing
- Correction of AI errors or inaccuracies

---

# 2. stack_example.c

## 2.1 Program Description
This program demonstrates how recursion creates multiple stack frames.
Each recursive call allocates its own local variables:
- local_int
- local_buf[?]
- marker
- p_local (a pointer to local_int)
Each frame prints the addresses of these objects, allowing us to observe how the stack grows downward and how each call has its own independent storage.

## 2.2 Observation Points
- Step 1: entry at depth 0
- Step 2: entry at depth 1
- Step 3: entry at depth 2
- Step 4: entry at depth 3
- Step 5: exit from depth 3
- Step 6: exit from depth 2
- Step 7: exit from depth 1
- Step 8: exit from depth 0

## 2.3 Cartes mémoire
Below, each depth corresponds to a separate stack frame created by recursion.
### Step 1 — Entry at depth 0
Stack (top frame = depth 0):
- local_int = 100 at 0xfffff8047f9c
- p_local = &local_int = 0xfffff8047f9c
- local_buf at 0xfffff8047fa8, first element 'A'
- marker = 0 at 0xfffff8047fe4
Heap:
- empty
Lifetime:
- First frame created.
- All objects belong to depth 0 and will remain alive until the final return

### Step 2 — Entry at depth 1
Stack (top frame = depth 1):
- local_int = 101 at 0xfffff8047f6c
- p_local = 0xfffff8047f6c
- local_buf at 0xfffff8047f78, first element 'B'
- marker = 10 at 0xfffff8047fb4
Stack observation:
Addresses are lower than depth 0 → stack grows downward.
Heap:
- empty

### Step 3 — Entry at depth 2
Stack (top frame = depth 2):
- local_int = 102 at 0xfffff8047f3c
- p_local = 0xfffff8047f3c
- local_buf at 0xfffff8047f48, first element 'C'
- marker = 20 at 0xfffff8047f84
Heap:
- empty

### Step 4 — Entry at depth 3
Stack (top frame = depth 3):
- local_int = 103 at 0xfffff8047f0c
- p_local = 0xfffff8047f0c
- local_buf at 0xfffff8047f18, first element 'D'
- marker = 30 at 0xfffff8047f54
Heap:
- empty
Lifetime:
- This is the deepest frame.
- All four frames (depth 0 → 3) coexist simultaneously.

### Step 5 — Exit from depth 3
The frame at depth 3 is destroyed.
Stack:
- Top frame is now depth 2 again.
Lifetime:
- All objects from depth 3 cease to exist.
- Their addresses must not be used anymore.

### Step 6 — Exit from depth 2
Depth 2 frame is destroyed.
Stack:
- Top frame is now depth 1.

### Step 7 — Exit from depth 1
Depth 1 frame is destroyed.
Stack:
- Top frame is now depth 0.

### Step 8 — Exit from depth 0
Final frame destroyed.
Program ends.

## 2.4 Aliasing and Lifetimes
- p_local always points to the local_int inside the same frame.
- Each frame has its own independent local_int, so p_local never aliases across frames.
- When a frame exits, its local_int, local_buf, and marker all become invalid.
- The program never uses these pointers after the frame ends, so there is no use-after-return.

## 2.5 Correction of an AI Error
- Initial AI explanation:
All recursive calls reuse the same stack memory region, so the addresses should be identical.
- Why this was incorrect:
In C, each recursive call creates a new stack frame with its own storage.
The addresses differ because the stack grows downward and each frame allocates fresh space.
- Corrected explanation:
Each recursive call allocates a new frame on the stack.
This is why &local_int, local_buf, and &marker all have different addresses at each depth.

---

# 3. heap_example.c
## 3.1 Program Description
This program allocates two separate heap objects representing two “person” structures (Alice and Bob).
Each structure contains:
- a pointer to a heap‑allocated name string
- an integer age
The program intentionally leaks memory by not freeing one or more of these allocations.

## 3.2 Observation Points
- Step 1: entry into main
- Step 2: allocation of Alice
- Step 3: allocation of Bob
- Step 4: end of program (leak becomes visible)

## 3.3 Memory Maps
### Step 1 — Entry into main
Stack:
- alice (uninitialized pointer)
- bob (uninitialized pointer)
Heap:
- empty
Lifetime:
- No dynamic objects yet.

### Step 2 — After allocating Alice
Program output:
alice=0xaf62797416b0 name=0xaf62797416d0 age=30
Stack:
- alice → 0xaf62797416b0
- bob (still uninitialized)
Heap:
- Person struct for Alice at 0xaf62797416b0
- name → 0xaf62797416d0
- age = 30
- Name string for Alice at 0xaf62797416d0
- Contains "Alice" (or equivalent)
Lifetime:
- Both allocations are alive.
- alice owns both blocks (directly and indirectly).

### Step 3 — After allocating Bob
Program output:
bob=0xaf62797416f0 name=0xaf6279741710 age=41
Stack:
- alice → 0xaf62797416b0
- bob → 0xaf62797416f0
Heap:
- Alice struct at 0xaf62797416b0
- name → 0xaf62797416d0
- age = 30
- Alice name at 0xaf62797416d0
- Bob struct at 0xaf62797416f0
- name → 0xaf6279741710
- age = 41
- Bob name at 0xaf6279741710
Lifetime:
- Four heap blocks are now alive.
- No aliasing: Alice and Bob are completely independent.

### Step 4 — End of program (deliberate leak)
Stack:
- alice and bob go out of scope.
Heap:
- All four heap blocks remain allocated:
- Alice struct
- Alice name
- Bob struct
- Bob name
Lifetime violation:
- None of these blocks are freed.
- This is a definite memory leak.

## 3.4 Aliasing and Lifetimes
- Each struct owns its own name string.
- No pointers alias between Alice and Bob.
- All heap objects outlive the stack variables, because the program never frees them.
- When main returns, the pointers disappear but the heap blocks remain allocated → lost ownership.

## 3.5 Correction of an AI Error
- Initial AI explanation:
The leak happens because the program overwrites a pointer before freeing it.
- Why this was incorrect:
No pointer is overwritten.
Both alice and bob keep their original addresses until the end.
- Corrected explanation:
The leak occurs because the program never calls free() on any of the allocated blocks.
When main exits, both pointers go out of scope, and all four heap blocks become unreachable.

---

# 4. aliasing_example.c
## 4.1 Program Description
This program demonstrates pointer aliasing and a classic use‑after‑free error.
Two pointers, a and b, are made to point to the same heap allocation.
After freeing a, the program continues to read and write through b, which becomes a dangling pointer.
This is intentional and should be reported by Valgrind.

## 4.2 Observation Points
- Step 1: allocation of a
- Step 2: aliasing (b = a)
- Step 3: reading through both pointers
- Step 4: free(a)
- Step 5: reading and writing through b after the free
- Step 6: end of program (dangling pointer remains)

## 4.3 Memory Maps
### Step 1 — Allocation of a
Program output:
a=0xb3fdf16916b0
Stack:
- a → 0xb3fdf16916b0
- b (uninitialized)
Heap:
- Block at 0xb3fdf16916b0
- Contains at least 4 integers (based on later accesses)
- Example: a[2] = 22
Lifetime:
- Heap block is alive and owned by a.

### Step 2 — Aliasing (b = a)
Program output:
b=0xb3fdf16916b0 a[2]=22 b[2]=22
Stack:
- a → 0xb3fdf16916b0
- b → 0xb3fdf16916b0 (same address)
Heap:
- Single block at 0xb3fdf16916b0
- Shared by both pointers
- a[2] and b[2] refer to the same memory cell
Aliasing:
- a and b are perfect aliases: two pointers, one object.

### Step 3 — Reading through both pointers
Still valid at this point.
Stack:
- a and b both point to the same valid heap block.
Heap:
- Block at 0xb3fdf16916b0
- a[2] = 22
- b[2] = 22
Lifetime:
- Everything is valid so far.

### Step 4 — free(a)
Program output:
after free(a): b=0xb3fdf16916b0 (dangling)
Stack:
- a → freed (invalid)
- b → still contains 0xb3fdf16916b0, but the memory is no longer allocated
Heap:
- Block at 0xb3fdf16916b0 is now deallocated
Lifetime violation:
- b becomes a dangling pointer
- The memory no longer belongs to the program
- Any read/write through b is undefined behavior

### Step 5 — Reading and writing through b after free
Program output:
reading b[2]=42418206
wrote b[3]=1234
Stack:
- b still holds the stale address
Heap:
- The block formerly at 0xb3fdf16916b0 is no longer owned by the program
- The value 42418206 is garbage
- Writing 1234 corrupts memory that may be reused by the allocator
Lifetime violation:
- Use‑after‑free
- Invalid read
- Invalid write
- Heap corruption possible

## 4.4 Aliasing and Lifetimes
- a and b alias the same heap block until free(a)
- After free(a), the block’s lifetime ends
- b becomes a dangling pointer
- The program continues to use b, causing undefined behavior
- This is a textbook example of:
- pointer aliasing
- lifetime violation
- use‑after‑free

## 4.5 Correction of an AI Error
- Initial AI explanation:
Only a becomes invalid after free(a), but b remains valid because it was not freed.
- Why this was incorrect:
a and b point to the same heap block.
Freeing the block through a ends the lifetime of the memory itself, not just the pointer.
Therefore, b becomes invalid immediately.
- Corrected explanation:
Freeing a frees the underlying heap block.
Since b aliases the same block, it becomes a dangling pointer.
Any access through b after the free is undefined behavior.

---

# 5. Synthèse générale
In this project, I learned that stack memory holds local variables whose lifetime ends automatically when the function returns, while heap memory contains objects created with malloc whose lifetime is entirely managed by the programmer. I also understood that when two pointers alias, they share the exact same address: freeing the object through one pointer immediately makes the other unsafe to use, even though it was not explicitly freed. Finally, I observed that AI tools can make mistakes not in syntax, but in reasoning about object lifetimes: they may treat a pointer as “valid” simply because it still contains an address, without recognizing that the underlying heap object no longer exists. This shows that memory analysis requires a precise understanding of program behavior that AI cannot always infer automatically.
