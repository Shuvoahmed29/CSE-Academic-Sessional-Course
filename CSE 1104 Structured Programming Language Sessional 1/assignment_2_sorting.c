//1. Write a C program for bubble sort.
/*#include <stdio.h>
int main()
{
    int n, i, j, copy;
    printf("How many number do you want : ");
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                copy = A[j];
                A[j] = A[j + 1];
                A[j + 1] = copy;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d\n", A[i]);
    return 0;
}*/

//2. Write a C program for insertion sort.
/*#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("How many number do you want : ");
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        k = A[i];
        while (j >= 0 && A[j] > k)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = k;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", A[i]);
    return 0;
}*/
