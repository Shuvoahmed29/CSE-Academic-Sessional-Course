//1. Write a c program to check given number is perfect number or not.
/*#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter any number:  ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum = sum + i;
    if (sum == n)
        printf("This number is a PERFECT NUMBER.");
    else
        printf("This number is NOT a PERFECT NUMBER.");
    return 0;
}*/

//2. Write a c program to check given number is Armstrong number or not.
/*#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 0, r, c;
    double sum = 0.00;
    printf("Enter any integer number: ");
    scanf("%d", &n);
    c = n;
    while (c != 0)
    {
        c = c / 10;
        i++;
    }
    c = n;
    while (c != 0)
    {
        r = c % 10;
        sum = sum + pow(r, i);
        c = c / 10;
    }
    if ((int)sum == n)
        printf("%d is an ARMSTRONG number.", n);
    else
        printf("%d is NOT an ARMSTRONG number.", n);
    return 0;
}*/

//3. Write a c program to check given number is prime number or not.
/*#include<stdio.h>
int main(){
    int n,a,i;
    printf("Enter any number:  ");
    scanf("%d",&n);
    if(n==0)
        printf("This number is not a PRIME NUMBER");
    else if(n==1)
        printf("This number is not a PRIME NUMBER");
    else if(n==2)
        printf("This number is a PRIME NUMBER\n");
    else{
        for(i=2;i<n;i++){
            if(n%i==0)
                a=9;
        break;
        }

    }
    if(a==9)
         printf("This number is not a PRIME NUMBER");
    else
         printf("This number is a PRIME NUMBER");
    return 0;
}*/

//4. Write a c program to check given number is strong number or not.
/*#include <stdio.h>
int main()
{
    int n, c, i, r, f, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    c = n;
    while (c != 0)
    {
        r = c % 10;
        f = 1;
        for (i = 1; i <= r; i++)
            f = f * i;
        sum = sum + f;
        c = c / 10;
    }
    if (sum == n)
        printf("This number is a STRONG number");
    else
        printf("This number is NOT a STRONG number");
    return 0;
}*/

//5. C program to check a number is odd or even.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:  ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("This number is EVEN number. ");
    else
        printf("This number is ODD number. ");
    return 0;
}*/

// 6. Write a c program to check given number is palindrome number or not.
/*#include<stdio.h>
#include<math.h>
int main(){
    int n,i=0,r,d,c;
    double sum=0.00;
    printf("Enter any number:  ");
    scanf("%d",&n);
    c=n;
    while(c!=0){
        c=c/10;
        i++;
    }
    c=n;
    while(c!=0){
        r=c%10;
        d=i-1;
        sum=sum+((double)r*pow(10,(double)d));
        i--;
        c=c/10;
    }
    if(n==(int)sum)
        printf("%d is a PALINDROM number.",n);
    else
        printf("%d is NOT a PALINDROM number.",n);
    return 0;
}*/

//7. Write a c program to check given string is palindrome number or not.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000], str2[1000];
    int len = 0, i, j = 0;
    gets(str1);
    while (str1[len] != 0)
        len++;
    for (i = len - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
    int d = strcmp(str1, str2);
    if (d == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}*/

//9. Write a c program to print Fibonacci series of given range.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    for (int i = 0; i < n; i++)
        printf("%d ", fibo[i]);
    return 0;
}*/

//10. Write a c program to get factorial of given number.
/*#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum = sum * i;
    printf("Factorial: %d\n", sum);
    return 0;
}*/

//11. Write a c program for Floyd’s triangle.
/*#include <stdio.h>
int main()
{
    int n, row, col, d = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
            printf("%d ", ++d);
        printf("\n");
    }
    return 0;
}*/

//12. Write a c program to print Pascal triangle.
/*#include <stdio.h>
int main()
{
    int row, col, n, no, space;
    printf("Enter any number: ");
    scanf("%d", &no);
    for (row = 0; row < no; row++)
    {
        for (space = 0; space < (no - row); space++)
            printf(" ");
        n = 1;
        for (col = 0; col <= row; col++)
        {
            printf("%d ", n);
            n = n * (row - col) / (col + 1);
        }
        printf("\n");
    }
    return 0;
}*/

// 13. Write a c program to generate multiplication table
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}*/

//14. Write a c program to print ASCII value of all characters.
/*#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("The ASCII value is: %d\n", ch);
    return 0;
}*/

//15. C program to print hello world without using semicolon
/*#include <stdio.h>
int main()
{
    if (printf("Hello World"))
        return 0;
}*/