#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long sum_of_squares(int limit) {
    long long result = 0;
    for (int i = 1; i <= limit; ++i) {
        result += (long long)i * i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <limit>\n", argv[0]);
        return 1;
    }

    int limit = atoi(argv[1]);
    if (limit <= 0) {
        fprintf(stderr, "Error: Limit must be a positive integer.\n");
        return 1;
    }

    clock_t start_time = clock();
    long long result = sum_of_squares(limit);
    clock_t end_time = clock();

    printf("Sum of squares from 1 to %d: %lld\n", limit, result);
    printf("Execution Time: %f seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
