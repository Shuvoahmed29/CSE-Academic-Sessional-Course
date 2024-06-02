//1. Write a C program to swap two numbers.
/*#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("Frist Number:");
    scanf("%d", &n1);
    printf("Second Number: ");
    scanf("%d", &n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("Frist Number: %d\n", n1);
    printf("Second Number: %d\n", n2);
    return 0;
}*/

//2. Write a C program to swap two numbers without using third variable.
/*#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Frist Number:");
    scanf("%d", &n1);
    printf("Second Number: ");
    scanf("%d", &n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("Frist Number: %d\n", n1);
    printf("Second Number: %d\n", n2);
    return 0;
}*/

//3. Write a C program to swapping of two arrays.
/*#include <stdio.h>
int main()
{
    int n1, n2, p, temp;
    printf("Enter First Array Element: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter Second Array Element: ");
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    if (n1 > n2)
        p = n1;
    else
        p = n2;
    for (int i = 0; i < p; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("\nFirst Array: ");
    for (int i = 0; i < n2; i++)
        printf("%d ", arr1[i]);
    printf("\nSecond Array: ");
    for (int i = 0; i < n1; i++)
        printf("%d ", arr2[i]);
    return 0;
}*/

//4. Write a C program for swapping of two string.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000], str2[10000], temp[10000];
    printf("First String: ");
    gets(str1);
    printf("Second String: ");
    gets(str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);
    return 0;
}*/