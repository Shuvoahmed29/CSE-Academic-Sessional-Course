#include <bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int a, b;

public:
    void set_data1(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};
class base2
{
protected:
    float c, d;

public:
    void set_data2(float c, float d)
    {
        this->c = c;
        this->d = d;
    }
};
// Multilevel
class drive1 : public base1
{
public:
    void display1()
    {
        cout << "Multilevel Inheritance.\n";
        cout << a << " " << b << endl;
    }
};
// Multiple
class drive2 : public base1, public base2
{
public:
    void display2()
    {
        cout << "Multiple Inheritance.\n";
        cout << a << " " << b << endl;
        cout << c << " " << d << endl;
    }
};
int main()
{
    // Multiple
    drive1 ob;
    ob.set_data1(100, 20);
    ob.display1();

    // Multiple
    drive2 ob1;
    ob1.set_data2(123.01, 45.152);
    ob1.display2();
}