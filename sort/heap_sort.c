#include "sort.h"

#define PARENT(i) ((i-1) / 2)
#define LEFT(i) (2*i + 1)
#define RIGHT(i) (2*i + 2)

void max_heapify(int A[], int i, int size)
{
    int l = LEFT(i);
    int r = RIGHT(i);
    int largest = i;
    if (l < size && A[l] > A[i])
        largest = l;

    if (r < size && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        my_swap(&A[i], &A[largest]);
        max_heapify(A, largest, size);
    }
}

void build_max_heap(int A[], int size)
{
    my_swap(&A[0], &A[size-1]);
    int i = size/2;
    for (; i >= 0; i--)
        max_heapify(A, i, size);
}

void heap_sort(int A[], int size)
{
    build_max_heap(A, size);
    int i = size-1;
    for (; i >= 1; i--)
    {
        my_swap(&A[0], &A[i]);
        max_heapify(A, 0, i);
    }
}

