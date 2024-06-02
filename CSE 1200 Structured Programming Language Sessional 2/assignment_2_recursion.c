//1. Write a C program to find factorial of a number using recursion.
/*#include <stdio.h>
int fact(int a)
{
    int sum = 1;
    if (a == 0)
        return sum;
    sum = sum * a * fact(a - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}*/

//2. Write a C program to find GCD of a two number using recursion.
/*#include <stdio.h>
int solve(int a, int b)
{
    while (b != 0)
        return solve(b, a % b);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", solve(n, m));
    return 0;
}*/

//3. Write a C program to find out sum digit of a number using recursion.
/*#include <stdio.h>
int solve(int a)
{
    while (a != 0)
        return (a % 10 + solve(a / 10));
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", solve(n));
    return 0;
}*/

//4. Write a C program to find power of a number using function recursion.
/*#include <stdio.h>
int solve(int base, int pow)
{
    if (pow != 0)
        return (base * solve(base, pow - 1));
    else
        return 1;
}
int main()
{
    int n, p;
    printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter Power: ");
    scanf("%d", &p);
    printf("Answer: %d\n", solve(n, p));
    return 0;
}*/

//5. Write a C program to reverse any number using recursion.
/*#include <stdio.h>
int solve(int a)
{
    static int sum = 0;
    if (a == 0)
        return sum;
    sum = 10 * sum + (a % 10);
    solve(a / 10);
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));
    return 0;
}*/
