#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: \n\t%s [file]\n", argv[0]);
        return 1;
    }

    FILE *in = freopen(argv[1], "rt", stdin);
    FILE *out = freopen("out.txt", "wt", stdout);

    int len;
    scanf("%d", &len);

    int *A = (int*) malloc (sizeof(int) * len);
    int i = 0;
    for (; i < len; i++)
        scanf("%d", &A[i]);

    clock_t start = clock();
    heap_sort(A, len);
    clock_t end = clock();
    printf("Time using: %ld\n", end - start);

    print_array(A, 0, len);

    fclose(out);
    fclose(in);

    return 0;
}
