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

	clock_t start, end;
	clock_t start_phase1, end_phase1;
	clock_t start_phase2, end_phase2;
	clock_t start_phase3, end_phase3;
	double total, total_phase1, total_phase2, total_phase3;

	start = clock();
	start_phase1 = clock();
	build_dataset();
	end_phase1 = clock();
	start_phase2 = clock();
	process_dataset();
	end_phase2 = clock();
	start_phase3 = clock();
	checksum = reduce_checksum();
	end_phase3 = clock();
	end = clock();

	total = (double)(end - start) / CLOCKS_PER_SEC;
	total_phase1 = (double)(end_phase1 - start_phase1) / CLOCKS_PER_SEC;
	total_phase2 = (double)(end_phase2 - start_phase2) / CLOCKS_PER_SEC;
	total_phase3 = (double)(end_phase3 - start_phase3) / CLOCKS_PER_SEC;

    if (checksum == 0ul)
	{
        printf("impossible\n");
	printf("TOTAL seconds: %.6f\n", total);
	printf("BUILD_DATA seconds: %.6f\n", total_phase1);
	printf("PROCESS seconds: %.6f\n", total_phase2);
	printf("REDUCE seconds: %.6f\n", total_phase3);
	}

    return 0;
}
