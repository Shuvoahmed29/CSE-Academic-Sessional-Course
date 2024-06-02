#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    int a;
    float b, f;
    myClass(float f)
    {
        this->f = f;
    }
    myClass(int a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Integer: " << a << endl;
        cout << "Float: " << b << endl;
    }
    void display1()
    {
        cout << "Another Float : " << f << endl;
    }
};
int main()
{
    myClass obj = myClass(10, 15.5);
    obj.display();
    myClass obj2 = 10.5;
    obj2.display1();
}