#include <bits/stdc++.h>
using namespace std;
class B;
class C;
class A
{
    float speed;

public:
    void set_value(float x)
    {
        speed = x;
    }
    friend float func(A, B, C);
};

class B : public A
{
    friend float func(A, B, C);
};

class C : public A
{
    friend float func(A, B, C);
};
float func(A ob1, B ob2, C ob3)
{
    if (ob1.speed > ob2.speed && ob1.speed < ob3.speed)
        return ob1.speed;
    else if (ob1.speed > ob3.speed && ob1.speed < ob2.speed)
        return ob1.speed;
    else if (ob2.speed > ob1.speed && ob2.speed < ob3.speed)
        return ob2.speed;
    else if (ob2.speed > ob3.speed && ob2.speed < ob1.speed)
        return ob2.speed;
    else if (ob3.speed > ob1.speed && ob3.speed < ob2.speed)
        return ob3.speed;
    else if (ob3.speed > ob2.speed && ob3.speed < ob1.speed)
        return ob3.speed;
}
int main()
{
    A a;
    float x;
    cin >> x;
    a.set_value(x);

    B b;
    float y;
    cin >> y;
    b.set_value(y);

    C c;
    float z;
    cin >> z;
    c.set_value(z);

    cout << "Second Max: " << func(a, b, c) << endl;
}