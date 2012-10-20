#include "sort.h"

#include <stdio.h>

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}


void print_array(int A[], int s, int size)
{
    int i = s;
    for (; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
