// 1. Write a c program to convert decimal number to binary number.
/*#include <stdio.h>
int main()
{
    int decimal, binary[32], i = 0, r, n, j;
    printf("Enter a decimal Number : ");
    scanf("%d", &decimal);
    n = decimal;
    while (decimal != 0)
    {
        r = decimal % 2;
        binary[i] = r;
        decimal = decimal / 2;
        i++;
    }
    printf("\nBinary Equivalent of %d is : ", n);
    for (j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n\n");
    return 0;
}*/

//2. Write a c program to convert decimal number to octal number.
/*#include<stdio.h>
int main()
{
    int decimal,octal[30],n,i=0,j,r;
    printf("Enter any Decimal Number : ");
    scanf("%d",&decimal);
    n = decimal;
    while(decimal!=0)
    {
        r = decimal%8;
        octal[i] = r;
        decimal = decimal/8;
        i++;
    }
    printf("\nOctal Equivalent of %d is : ",n);
    for(j=i-1;j>=0;j--)
        printf("%d",octal[j]);
    printf("\n\n");
    return 0;
}*/

//3. Write a c program to convert decimal number to hexadecimal number.
/*#include<stdio.h>
int main()
{
    int decimal,i=0,n,r,j;
    char hexadecimal[20];
    printf("Enter any decimal Number :  ");
    scanf("%d",&decimal);
    n = decimal;
    while(decimal!=0)
    {
        r = decimal%16;
        if(r<10)
            hexadecimal[i] = '0' + r;
        else
            hexadecimal[i] = 'A' + (r-10);
        decimal = decimal/16;
        i++;

    }
    printf("%d Decimal Number to Hexadecimal Number =  ",n);
    for(j=i-1; j>=0; j--)
        printf("%c",hexadecimal[j]);
    return 0;
}*/

//4. Write a c program to convert octal number to binary number.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,octal,decimal,binary[20],r,i=0,j,sum=0;
    printf("Enter any Octal Number :  ");
    scanf("%d",&octal);
    n = octal;
    while(octal!=0)
    {
        r = octal%10;
        sum = sum+ r*pow(8,i);
        octal = octal/10;
        i++;
    }
    decimal = sum;
    i=0;
   while(decimal!=0)
    {
        r = decimal%2;
        binary[i]=r;
        decimal=decimal/2;
        i++;
    }
    printf("\nBinary Equivalent of %d is : ",n);
    for(j=i-1;j>=0;j--)
        printf("%d",binary[j]);
    printf("\n\n");
    return 0;
}*/

//5. Write a c program to convert octal number to decimal number.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,octal,i=0,n,r,sum=0;
    printf("Enter any Octal Number : ");
    scanf("%d",&octal);
    n = octal;
    while(octal!=0)
    {
        r = octal%10;
        sum = sum + r*pow(8,i);
        i++;
        octal = octal/10;
    }
    printf("\nDecimal: %d\n",sum);
    return 0;
}*/

// 6. Write a c program to convert octal number to hexadecimal number.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int octal,n,i=0,j,decimal,sum=0,r;
    char hexadecimal[20];
    printf("Enter any Octal Number : ");
    scanf("%d",&octal);
    n = octal;
    while(octal!=0)
    {
        r = octal%10;
        sum = sum + r*pow(8,i);
        octal = octal/10;
        i++;
    }
    decimal = sum;
    i = 0;
    while(decimal!=0)
    {
        r = decimal%16;
        if(r<10)
            hexadecimal[i] = '0' + r;
        else
            hexadecimal[i] = 'A' + (r-10);
        decimal = decimal/16;
        i++;
    }
    printf("%d Octal Number to Hexadecimal Number is : ",n);
    for(j=i-1;j>=0;j--)
        printf("%c",hexadecimal[j]);
    return 0;
}*/

//7. Write a c program to convert hexadecimal number to binary number.
/*#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int main()
{
    long long int decimal=0;
    char hexa[17];
    int i=0,value,r,len,j,binary[20];
    printf("Enter any Hexadecimal Number :  ");
    gets(hexa);
    len = strlen(hexa);
    len--;
    for(i=0;hexa[i]!='\0';i++)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
            value = hexa[i] - 48;
        else if(hexa[i]>='a' && hexa[i]<='f')
            value = hexa[i] - 97 + 10;
        else if(hexa[i]>='A' && hexa[i]<='F')
            value = hexa[i] - 65 + 10;
        decimal = decimal + value*pow(16,len);
        len--;
    }
    i=0;
    while(decimal!=0)
    {
        r = decimal%2;
        binary[i] = r;
        decimal = decimal/2;
        i++;
    }
    printf("\nHexadecimal Number =  %s\n",hexa);
    printf("\nBinary Number      = ");
    for(j=i-1;j>=0;j--)
        printf("%d",binary[j]);
    getch();
}*/

//8. Write a c program to convert hexadecimal number to octal number.
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int decimal=0;
    int len,i,value,r,j,octal[20];
    char hexa[17];
    printf("Enter any Hexadecimal Number :  ");
    gets(hexa);
    len = strlen(hexa);
    len--;
    for(i=0;hexa[i]!='\0';i++)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
            value = hexa[i] - 48;
        else if(hexa[i]>='a' && hexa[i]<='f')
            value = hexa[i] - 97 + 10;
        else if(hexa[i]>='A' && hexa[i]<='F')
            value = hexa[i] - 65 + 10;
        decimal = decimal + value*pow(16,len);
        len--;
    }
    i=0;
    while(decimal!=0)
    {
        r = decimal%8;
        octal[i] = r;
        decimal = decimal/8;
        i++;
    }
    printf("Hexadecimal Number =  %s\n",hexa);
    printf("Octal Number       =  ");
    for(j=i-1;j>=0;j--)
        printf("%d",octal[j]);
    return 0;
}*/

//9. Write a c program to convert hexadecimal number to decimal number.
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i=0,len,value;
    long long int decimal=0;
    char hexa[17];
    printf("Enter any Hexadecimal Number : ");
    gets(hexa);
    len = strlen(hexa);
    len--;
    for(i=0;hexa[i]!='\0';i++)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
            value = hexa[i]-48;
        else if(hexa[i]>='a' && hexa[i]<='f')
            value = hexa[i]-97+10;
        else if(hexa[i]>='A' && hexa[i]<='F')
            value = hexa[i]-65+10;
        decimal = decimal + value*pow(16,len);
        len--;
    }
    printf("%s     Hexadecimal Number to Decimal Number =   %lld",hexa,decimal);
    return 0;
}*/

//10. Write a c program to convert binary number to octal number.
/*#include<stdio.h>
#include<math.h>
int main()
{
   int n,octal[20],decimal,binary,r,i=0,j,sum=0;
   printf("Enter any Binary Number : ");
   scanf("%d",&binary);
   n = binary;
   while(binary!=0)
   {
       r = binary%10;
       sum = sum + r*pow(2,i);
       binary = binary/10;
       i++;
   }
   decimal = sum;
   i = 0;
   while(decimal!=0)
   {
       r = decimal%8;
       octal[i] = r;
       decimal = decimal/8;
       i++;
   }
   printf("\nBinary Equivalent of %d is : ",n);
   for(j=i-1;j>=0;j--)
       printf("%d",octal[j]);
   printf("\n\n");
   return 0;
}*/

//11. Write a c program to convert binary number to decimal number.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int decimal,binary,i=0,n,r,sum=0;
    printf("Enter any binary Number : ");
    scanf("%d",&binary);
    n = binary;
    while(binary!=0)
    {
        r = binary%10;
        sum = sum + r*pow(2,i);
        i++;
        binary = binary/10;
    }
    printf("\nBinary Equivalent of %d is : %d\n",n,sum);
    return 0;
}*/

//12. Write a c program to convert binary number to hexadecimal number.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int binary,decimal,i=0,n,r,sum=0,j;
    char hexadecimal[20];
    printf("Enter any binary Number :  ");
    scanf("%d",&binary);
    n = binary;
    while(binary!=0)
    {
        r = binary%10;
        sum = sum + r*pow(2,i);
        binary = binary/10;
        i++;
    }
    decimal = sum;
    i = 0;
    while(decimal!=0)
    {
        r = decimal%16;
        if(10>r)
            hexadecimal[i] = '0' + r;
        else
            hexadecimal[i] = 'A' + (r-10);
        decimal = decimal/16;
        i++;
    }
    printf("%d Binary Number to Hexadecimal Number is :  ",n);
    for(j=i-1;j>=0;j--)
        printf("%c",hexadecimal[j]);
    return 0;
}*/

//13. C program for addition of binary numbers.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int binary1,binary2,binary[20],decimal1,decimal2,decimal;
    int i,n1,n2,sum=0,r,j;
    printf("Enter First Binary Number :  ");
    scanf("%d",&binary1);
    printf("Enter Second Binary Number :  ");
    scanf("%d",&binary2);
    n1 = binary1;
    n2 = binary2;
    i=0;
    while(binary1!=0)
    {
        r = binary1%10;
        sum = sum + r*pow(2,i);
        binary1 = binary1/10;
        i++;
    }
    decimal1 = sum;
    sum = 0;
     i=0;
    while(binary2!=0)
    {
        r = binary2%10;
        sum = sum + r*pow(2,i);
        binary2 = binary2/10;
        i++;
    }
    decimal2 = sum;
    decimal = decimal1 + decimal2;
    i =0;
    while(decimal!=0)
    {
        r = decimal%2;
        binary[i] = r;
        decimal = decimal/2;
        i++;
    }
    printf("\nFirst Binary Number        = %d",n1);
    printf("\nSecond Binary Number       = %d",n2);
    printf("\nFirst+Second Binary Number = ");
    for(j=i-1;j>=0;j--)
        printf("%d",binary[j]);
    return 0;
}*/

//14. C program for multiplication of two binary numbers.
/*#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int binary1,binary2,binary[20],decimal1,decimal2,decimal;
    int i,n1,n2,sum=0,r,j;
    printf("Enter First Binary Number :  ");
    scanf("%d",&binary1);
    printf("Enter Second Binary Number :  ");
    scanf("%d",&binary2);
    n1 = binary1;
    n2 = binary2;
    i=0;
    while(binary1!=0)
    {
        r = binary1%10;
        sum = sum + r*pow(2,i);
        binary1 = binary1/10;
        i++;
    }
    decimal1 = sum;
    sum = 0;
     i=0;
    while(binary2!=0)
    {
        r = binary2%10;
        sum = sum + r*pow(2,i);
        binary2 = binary2/10;
        i++;
    }
    decimal2 = sum;
    decimal = decimal1 * decimal2;
     i =0;
    while(decimal!=0)
    {
        r = decimal%2;
        binary[i] = r;
        decimal = decimal/2;
        i++;
    }
    printf("\nFirst Binary Number          = %d",n1);
    printf("\nSecond Binary Number         = %d",n2);
    printf("\nFirst X Second Binary Number = ");
    for(j=i-1;j>=0;j--)
        printf("%d",binary[j]);
    getch();
}*/

//17. C program to convert decimal number to roman.
/*#include<stdio.h>
void rm(int a);
void rm1(int a);
void rm2(int a);
int main()
{
    int n,a,b,c;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n/10;
    c=n%10;
    printf("The Roman Value is : ");
    rm(a);
    rm1(b);
    rm2(c);
    printf("\n");
    return 0;
}
void rm(int a)
{
    if(a==1)
        printf("C");
    else if(a==2)
        printf("CC");
    else if(a==3)
        printf("CCC");
    else if(a==4)
        printf("CD");
    else if(a==5)
        printf("D");
    else if(a==6)
        printf("DC");
    else if(a==7)
        printf("DCC");
    else if(a==8)
        printf("DCCC");
    else if(a==9)
        printf("CM");
    else if(a==10)
        printf("M");

}
void rm1(int b)
{
    if(b==1)
        printf("X");
    else if(b==2)
        printf("XX");
    else if(b==3)
        printf("XXX");
    else if(b==4)
        printf("XL");
    else if(b==5)
        printf("L");
    else if(b==6)
        printf("LX");
    else if(b==7)
        printf("LXX");
    else if(b==8)
        printf("LXXX");
    else if(b==9)
        printf("XC");
}
void rm2(int c)
{
    if(c==1)
        printf("I");
    else if(c==2)
        printf("II");
    else if(c==3)
        printf("III");
    else if(c==4)
        printf("IV");
    else if(c==5)
        printf("V");
    else if(c==6)
        printf("VI");
    else if(c==7)
        printf("VII");
    else if(c==8)
        printf("VIII");
    else if(c==9)
        printf("IX");
}*/

//19. C program to convert each digits of a number in words.
/*#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n != 0)
    {
        num = (num * 10);
        num = num+(n % 10);
        n=n/10;
    }
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        num = num / 10;
    }
    printf("\n");
    return 0;
}*/
