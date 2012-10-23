#include "sort.h"

int p(int A[], int start, int end)
{
    // choose the last one as p
    int mid = A[end];
    int i = start;
    int j = end - 1;
    while (1)
    {
        while (i < end && A[i] <= mid) i++;
        while (j >= start && A[j] >= mid) j--;
        if (i < j)
        {
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
        else
		{
			int tmp = A[end];
			A[end] = A[i];
			A[i] = tmp;
			return i;
		}
    }
}

void qqsort(int A[], int start, int end)
{
	if ((end - start) <= 0) return ;
	int q = p(A, start, end);
	qqsort(A, start, q - 1);
	qqsort(A, q + 1, end);
}

