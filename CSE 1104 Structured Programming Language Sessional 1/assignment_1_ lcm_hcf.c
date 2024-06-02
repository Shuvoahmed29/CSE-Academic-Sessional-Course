//1. Write a c program to find out L.C.M. of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;
    printf("Enter two number :  ");
    scanf("%d%d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1 * num2) / gcd;
    printf("LCM = %d\n", lcm);
    return 0;
}

//2. Write a c program to find out H.C.F. of two numbers.
/*#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,hcf;
    printf("Enter two number:  ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    hcf = n1;
    printf("HCF = %d\n",hcf);
    return 0;
}*/

//3. Write a c program to find out G.C.D. of two numbers.
/*#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd;
    printf("Enter two number :  ");
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf("GCD = %d\n",gcd);
    return 0;
}*/
