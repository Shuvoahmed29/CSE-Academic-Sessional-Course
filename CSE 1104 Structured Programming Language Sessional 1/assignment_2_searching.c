//1. Write a C program for linear search.
/*#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Element number: ");
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    int value;
    printf("Enter the value you want to search : ");
    scanf("%d", &value);
    for (i = 0; i < n; i++)
    {
        if (value == A[i])
        {
            printf("Number %d is Found at : %d position\n", value, i + 1);
            return 0;
        }
    }
    printf("Number %d isn't found\n", value);
    return 0;
}*/

//2. Write a C program for binary search.
/*#include <stdio.h>
int main()
{
    int n, copy, p = 0;
    printf("Enter Element number: ");
    scanf("%d", &n);
    int A[n], j, i;
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                copy = A[i];
                A[i] = A[j];
                A[j] = copy;
            }
        }
    }
    int low = 0, high, mid, value;
    printf("Which element you want : ");
    scanf("%d", &value);
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (value < A[mid])
            high = mid - 1;
        else if (value > A[mid])
            low = mid + 1;
        else if (value == A[mid])
        {
            p = 1;
            break;
        }
    }
    if (p == 0)
        printf("The Number is not found.\n");
    else
        printf("The number is Found at : %d Position.\n", mid + 1);
    return 0;
}*/
