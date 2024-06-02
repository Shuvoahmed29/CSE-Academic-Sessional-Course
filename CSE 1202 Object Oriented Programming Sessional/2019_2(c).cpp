#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void set_a(int f)
    {
        a = f;
    }
    friend class B;
};
class B : private A
{
    int b;

public:
    B(int aa, int bb)
    {
        set_a(aa);
        b = aa + bb;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    B obj(1, 2);
    obj.show();
}