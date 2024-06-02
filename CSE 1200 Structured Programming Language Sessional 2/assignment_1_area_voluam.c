//1. Write a c program to find the area of circle.
/*#include <stdio.h>
int main()
{
    double r, area, pi = 3.1416;
    printf("Enter the value of R = ");
    scanf("%lf", &r);
    area = pi * r * r;
    printf("The Circle Area is : %0.4lf\n", area);
    return 0;
}*/

//2. Write a c program to find the area of any triangle.
/*#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area, d;
    printf("Enter First arm of triangle :  ");
    scanf("%lf", &a);
    printf("Enter Second arm of triangle :  ");
    scanf("%lf", &b);
    printf("Enter Third arm of triangle :  ");
    scanf("%lf", &c);
    s = (a + b + c) / 2;
    d = s * (s - a) * (s - b) * (s - c);
    area = pow(d, 0.5);
    printf("The Area of Triangle is = %0.2lf\n", area);
    getch();
}*/

//3. Write a c program to find the area of equilateral triangle.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    double a, s, area;
    printf("Enter one arm of triangle :  ");
    scanf("%lf", &a);
    area = 0.433012701 * a * a;
    printf("The Area of Triangle is = %0.2lf\n", area);
    getch();
}*/

//4. Write a c program to find the area of right angled triangle.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    double b, h, area;
    printf("Enter Height of triangle :  ");
    scanf("%lf", &h);
    printf("Enter Base of triangle :  ");
    scanf("%lf", &b);
    area = 0.5 * h * b;
    printf("The Area of Triangle is = %0.2lf\n", area);
    getch();
}*/

//5. Write a c program to find the area of rectangle.
/*#include<stdio.h>
#include<conio.h>
int main()
{
    double b,h,area;
    printf("Enter Height of rectangle :  ");
    scanf("%lf",&h);
    printf("Enter Base of rectangle :  ");
    scanf("%lf",&b);
    area = h * b;
    printf("The Area of Rectangle is = %0.2lf\n",area);
    getch();
}*/

//6. Write a c program to find the area of trapezium.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    double b, a, h, area;
    printf("Enter Height of Trapezium   :  ");
    scanf("%lf", &h);
    printf("Enter two Base of Trapezium :  ");
    scanf("%lf%lf", &a, &b);
    area = 0.5 * (a + b) * h;
    printf("The Area of Trapezium is = %0.2lf\n", area);
    getch();
}*/

//7. Write a c program to find the area of rhombus.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    double d1, d2, area;
    printf("Enter First Diagonals of Rhombus   :  ");
    scanf("%lf", &d1);
    printf("Enter Second Diagonals of Rhombus   :  ");
    scanf("%lf", &d2);
    area = 0.5 * d1 * d2;
    printf("The Area of Rhombus is = %0.2lf\n", area);
    getch();
}*/

// 8. Write a c program to find the area of parallelogram.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    double b, h, area;
    printf("Enter Height of parallelogram   :  ");
    scanf("%lf", &h);
    printf("Enter two Base of parallelogram :  ");
    scanf("%lf", &b);
    area = b * h;
    printf("The Area of parallelogram is = %0.2lf\n", area);
    getch();
}*/

//9. Write a c program to find the volume and surface area of cube.
/*#include <stdio.h>
int main()
{
    float a, v, s;
    printf("Enter One arm value of a Cube :  ");
    scanf("%f", &a);
    v = a * a * a;
    s = 6 * a * a;
    printf("Volume :  %0.2f\n", v);
    printf("Surface Area : %0.2f\n", s);
    return 0;
}*/

//10. Write a c program to find the volume and surface area of cuboids.
/*#include <stdio.h>
int main()
{
    float l, b, h, sa, v;
    printf("Enter height,base & length of a cuboids :  ");
    scanf("%f%f%f", &h, &b, &l);
    v = l * b * h;
    sa = 2 * (l * h + l * b + b * h);
    printf("Volume       :  %0.2f\n", v);
    printf("Surface Area : %0.2f\n", sa);
    return 0;
}*/

//11. Write a c program to find the volume and surface area of cylinder.
/*#include<stdio.h>
int main()
{
    float r,h,sa,v;
    printf("Enter height & radius of a cylinder :    ");
    scanf("%f%f",&h,&r);
    sa = 2*3.1415*r*(r + h);
    v = 3.1415*r*r*h;
    printf("Volume       :  %0.2f\n",v);
    printf("Surface Area : %0.2f\n",sa);
    return 0;
}*/

//12. Write a c program to find the surface area and volume of a cone.
/*#include<stdio.h>
int main()
{
    float r,h,sa,v;
    printf("Enter height & radius of a cone :    ");
    scanf("%f%f",&h,&r);
    sa = 3.1415*r*(r + h);
    v = 1.047198*r*r*h;
    printf("Volume       :  %0.2f\n",v);
    printf("Surface Area : %0.2f\n",sa);
    return 0;
}*/

//13. Write a c program to find the volume and surface area of sphere.
/*#include<stdio.h>
int main()
{
    float r,sa,v;
    printf("Enter radius of a  Sphere :    ");
    scanf("%f",&r);
    v = 4.1888*r*r*r;
    sa = 4*3.1415*r*r;
    printf("Volume       :  %0.2f\n",v);
    printf("Surface Area : %0.2f\n",sa);
    return 0;
}*/

//14. Write a c program to find the perimeter of a circle, rectangle and triangle.
/*#include<stdio.h>
int main()
{
    float a,b,c,l,ba,p1,p2,p3,r,h;
    printf("Enter three arm length of a triangle      :  ");
    scanf("%f%f%f",&a,&b,&c);
    p1 = a+b+c;
    printf("Enter height & base of a rectangle        : ");
    scanf("%f%f",&h,&ba);
    p2 = 2*(ba+h);
    printf("Enter the radius of a Circle              : ");
    scanf("%f",&r);
    p3 = 2*3.1415*r;
    printf("The perimeter of a circle is     : %0.2f\n",p3);
    printf("The perimeter of a rectangle is  : %0.2f\n",p2);
    printf("The perimeter of a triangle is   : %0.2f\n",p1);
    return 0;
}*/
