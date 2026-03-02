#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t t_start, t_end;
    clock_t b_start, b_end;
    clock_t p_start, p_end;
    clock_t r_start, r_end;
    double elapsed_t;
    double elapsed_b;
    double elapsed_p;
    double elapsed_r;



    /* Students must add clock-based timing and print required lines. */
	t_start = clock();

	b_start = clock();
	build_dataset();
	b_end = clock();
	elapsed_b = (double)(b_end - b_start) / (double)CLOCKS_PER_SEC;

	p_start = clock();
    	process_dataset();
	p_end = clock();
	elapsed_p = (double)(p_end - p_start) / (double)CLOCKS_PER_SEC;

	r_start = clock();
    	checksum = reduce_checksum();
	r_end = clock();
	elapsed_r = (double)(r_end - r_start) / (double)CLOCKS_PER_SEC;

	t_end = clock();
	elapsed_t = (double)(t_end - t_start) / (double)CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");


    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */





    printf("TOTAL seconds: %.6f\n", elapsed_t);
    printf("BUILD_DATA seconds: %.6f\n", elapsed_b);
    printf("PROCESS seconds: %.6f\n", elapsed_p);
    printf("REDUCE seconds: %.6f\n", elapsed_r);

    return 0;
}
