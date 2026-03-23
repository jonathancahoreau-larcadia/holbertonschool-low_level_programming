# Global Memory Analysis Report
1. Memory Model Understanding
In my analyses, I clearly distinguish between stack memory and heap memory.
For example:
- A local variable such as int local_int = 100 + depth; lives on the stack.
- A dynamically allocated structure such as Person *p lives on the heap.
A stack variable ceases to exist as soon as the function that owns it returns.
Its lifetime is strictly limited to the function’s activation frame.
A heap object becomes invalid when its memory is freed.
It is the programmer’s responsibility to free heap memory explicitly.
After free, all pointers that referenced that object become dangling pointers.

2. Pointer & Aliasing Reasoning
I explicitly track when pointers alias the same memory.
For example:
int *a = NULL;
int *b = NULL;
b = a;

Here, a and b alias the same address (even if that address is NULL).
A pointer becomes dangling when it continues to reference memory that has already been freed.
If a pointed to a heap object and that object is freed, then both a and any alias like b become invalid.
I can determine that a pointer is invalid without running the program simply by following the lifetime of the object it refers to.
If the object has been freed or if the stack frame has returned, then the pointer is invalid by definition.

3. Valgrind Interpretation
I do not simply paste Valgrind output; I interpret it.
For example, Valgrind reported:
ERROR SUMMARY: 3 errors from 3 contexts

The detailed report showed a use‑after‑free.
The real cause was that the program accessed a heap object after its lifetime had ended.
Valgrind also indicated the exact line where the invalid access occurred, which allowed me to confirm that the pointer used at that location was already dangling.

4. Crash Root Cause Explanation
One of the programs crashed with a segmentation fault.
This was caused by the instruction:
num[0] = 42;

At that moment, the function responsible for allocating memory had returned NULL.
Thus, num pointed to address 0x0, and the program attempted to write to a non‑existent object.
The crash is therefore a deterministic consequence of a NULL pointer dereference, not an accident.

5. Critical Use of AI
I used AI at specific moments to get hypotheses about suspicious lines of code.
However, I did not rely on these answers blindly.
For example, when I showed the line:
num[0] = 42;

the AI incorrectly concluded that it was a buffer overflow.
This was wrong because it ignored the context: the allocation function had returned NULL, so the real issue was a NULL dereference.
This demonstrates that AI can misinterpret code when it does not follow object lifetimes.
I treated AI output as a suggestion, not as authoritative truth, and corrected its mistakes using my own reasoning.
