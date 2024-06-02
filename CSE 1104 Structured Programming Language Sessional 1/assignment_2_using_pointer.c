//1. Write a C program for concatenation two string using pointer.
/*#include <stdio.h>
int main()
{
    char str1[10000], str2[10000];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    char *a = str1;
    char *b = str2;
    while (*a)
        a++;
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is: %s ", str1);
    return 0;
}*/