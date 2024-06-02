// 1. Write a c program to find out the sum of series 1 + 2 + …. + n.
/*#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter last number of the series: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("%d", sum);
    return 0;
}*/

//2. Write a c program to find out the sum of series 1^2 + 2^2 + …. + n^2.
/*#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the last number in this series : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i * i;
    printf("1^2 + 2^2 + 3^2 + .........+n^2 = %d\n", sum);
    return 0;
}*/

//3. Write a c program to find out the sum of series 1^3 + 2^3 + …. + n^3.
/*#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the last number in this series : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i * i * i;
    printf("1^3 + 2^3 + 3^3 + .........+n^3 = ");
    printf(" %d\n", sum);
    return 0;
}*/

//4. Write a c program to find out the sum of given A.P.
/*#include<stdio.h>
int main()
{
    int a,d,n,sum=0,k;
    printf("Enter the first number of A.P series = ");
    scanf("%d",&a);
    printf("Enter the last number of A.P series = ");
    scanf("%d",&n);
    printf("Enter the Common different of A.P series = ");
    scanf("%d",&d);
    k=a;
    for(int i=1; i<=n; i++)
    {
        sum = sum+k;
        k=k+d;
    }
    for(int i=1; i<=n; i++)
    {
        printf("%d",a);
        a=a+d;
        if(n-i!=0)
            printf(" + ");
    }
    printf(" = %d\n",sum);
    return 0;
}*/

//5. Write a c program to find out the sum of given G.P.
/*#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, r, sum, i, k;
    printf("Enter the first number of G.P series : ");
    scanf("%d", &a);
    printf("Enter the Total Numbers in this G.P Series: ");
    scanf("%d", &n);
    printf("Enter the Common Ratio of G.P series : ");
    scanf("%d", &r);
    k = a;
    for (i = 1; i <= n; i++)
    {
        printf("%d", k);
        k = k * r;
        if (n - i != 0)
            printf(" + ");
    }
    sum = a * (1 - pow(r, n));
    sum = sum / (1 - r);
    printf(" = %d\n", sum);
    return 0;
}*/

//6. Write a c program to find out the sum of given H.P.
/*#include<stdio.h>
int main()
{
    double sum=0,k,a,d,n,i;
    printf("Enter the first number of H.P series = ");
    scanf("%lf",&a);
    printf("Enter the last number of H.P series = ");
    scanf("%lf",&n);
    printf("Enter the Common different of H.P series = ");
    scanf("%lf",&d);
    k=a;
    for(i=1; i<=n; i++)
    {
        sum = sum+(1/k);
        k=k+d;
    }
    for(i=1; i<=n; i++)
    {
        printf("1/%0.0lf",a);
        a=a+d;
        if(n-i!=0)
            printf(" + ");
    }
    printf(" = %0.2lf\n",sum);
    return 0;
}*/

//7. Write a c program to find out the sum of series 1 + 2 + 4 + 8 … to infinity.
/*#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the last number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i = i * 2;
    }
    printf("The sum is : %d\n", sum);
    return 0;
}*/
