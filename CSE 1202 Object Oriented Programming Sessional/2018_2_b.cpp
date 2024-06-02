#include <bits/stdc++.h>
using namespace std;
class B;
class C;
class A
{
    int data;

public:
    void set_value(int x)
    {
        data = x;
    }
    friend float avg(A, B, C);
};

class B : public A
{
    friend float avg(A, B, C);
};

class C : public A
{
    friend float avg(A, B, C);
};
float avg(A obj1, B obj2, C obj3)
{
    return (obj1.data + obj2.data + obj3.data) / 3.0;
}
int main()
{
    A a;
    int x;
    cin >> x;
    a.set_value(x);

    B b;
    int y;
    cin >> y;
    b.set_value(y);

    C c;
    int z;
    cin >> z;
    c.set_value(z);
    cout << "Average: " << avg(a, b, c) << endl;
}