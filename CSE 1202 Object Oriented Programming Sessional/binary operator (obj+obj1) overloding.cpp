#include <bits/stdc++.h>
using namespace std;
class example
{
    int a, b;

public:
    void set_data(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display()
    {
        cout << "A : " << a << "  B : " << b << endl;
    }
    example operator+(example t)
    {
        example temp;
        temp.a = a + t.a;
        temp.b = b + t.b;
        return temp;
    }
};
int main()
{
    example obj, obj1, obj2;
    obj.set_data(10, 20);
    obj1.set_data(10, 20);
    obj2 = obj + obj1;
    obj2.display();
}