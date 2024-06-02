//1. Write a c program to reverse any number.
/*#include <stdio.h>
int main(){
    int n, sum = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0){
        r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }
    printf("Reversed number = %d", sum);
    return 0;
}*/

//2. Write a c program to find out sum of digit of given number.
/*#include <stdio.h>
int main(){
    int n, sum = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0){
        r = n % 10;
        sum = sum+ r;
        n /= 10;
    }
    printf("Sum of digit = %d", sum);
    return 0;
}*/

//3. Write a c program to find out power of number.
/*#include<stdio.h>
int main(){
    int b,p,d=1;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d", &p);
    for(int i=0;i<p;i++)
        d=d*b;
    printf("Anser: %d\n",d);
    return 0;
}*/

//4. Write a c program to c add two number without using additional operator .
/*#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter two number: ");
    scanf("%d%d", &a,&b);
    sum=~b;
    sum=-(sum-a)-1;
    printf("The sum is : %d\n",sum);
    return 0;
}*/

//5. Write a c program to subtract two numbers without using subtraction operator.
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sub;
    printf("Enter two number :  ");
    scanf("%d%d",&a,&b);
    sub=~b;
    //printf("1s compliment is : %d\n",sub);
    sub=sub+1;
   //printf("2s compliment is : %d\n",sub);
    sub=sub+a;
    printf("The Subtraction is : %d\n",sub);
    getch();
}*/

//6. Write a c program to find largest among three numbers using binary minus operator.
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a-b>0 && a-c>0)
        printf("%d is the largest\n",a);
    else if(b-c>0)
        printf("%d is the largest\n",b);
    else
        printf("%d is the largest\n",c);
    return 0;
}*/

//7. Write a c program to find largest among three number using conditional operator
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is the largest\n",a);
    else if(b>c)
        printf("%d is the largest\n",b);
    else
        printf("%d is the largest\n",c);
    return 0;
}*/

//8. Write a c program to find out generic root of any number.
/*#include<stdio.h>
int main()
{
    int n,sum=0,r,N;
    printf("Enter any positive number : ");
    scanf("%d",&N);n=N;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
        if(n==0){
          if(sum>9){
              n=sum;
              sum=0;
          }
        }
    }
    printf("The generic root of %d is = %d\n",N,sum);
    return 0;
}*/

//9. Write a c program to find out prime factor of given number.
/*#include <stdio.h>
int main()
{
    int n, i, j, k, e;
    printf("Enter any integer number :  ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                k++;
        }
        if (k == 2)
            printf("%d\n", i);
    }
    return 0;
}*/

// 10. Write a c program to find out NCR factor of given number.
/*#include <stdio.h>
int main()
{
    int n, r, s = 1, i, j = 1;
    printf("Enter two value :  ");
    scanf("%d%d", &n, &r);
    for (i = 0; i <= (r - 1); i++)
    {
        s = s * (n - i);
        j = j * (r - i);
    }
    s = s / j;
    printf("The NCR value is = %d\n", s);
    return 0;
}*/

//12. Program in c to print 1 to 100 without using loop
/*#include<stdio.h>
int pnum(int n){
    if(n<=100){
        printf("%d\n",n);
        pnum(n+1);
    }
}
int main(){
    int n=1;
    pnum(n);
    return 0;
}*/

//13. C program for swapping of two numbers
/*#include<stdio.h>
int main()
{
    int n1,n2,copy;
    printf("Enter First number :  ");
    scanf("%d",&n1);
    printf("Enter Second number :  ");
    scanf("%d",&n2);
    copy=n1;
    n1=n2;
    n2=copy;
    printf("First number = %d\n",n1);
    printf("Second number = %d\n",n2);
    return 0;
}*/

//14. Program to find largest of n numbers in c
/*#include<stdio.h>
int main(){
    int n,i,larg=0,ele;
    printf("Enter Number of Element :  ");
    scanf("%d",&n);
    printf("Enter %d Element :  ",n);
    for(i=1;i<=n;i++){
        scanf("%d",&ele);
        if(ele>larg)
            larg = ele;
    }
    printf("The largest Number is : %d\n",larg);
    return 0;
}*/

//15. Split number into digits in c programming
/*#include<stdio.h>
int main(){
    int n,rem;
    printf("Enter any Number : ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        n = n/10;
        printf("%d\n",rem);
    }
    return 0;
}*/

//16. C program to count number of digits in a number
/*#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter any integer number :  ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        i = i + 1;
    }
    printf("The digit in a number is %d", i);
    return 0;
}*/
