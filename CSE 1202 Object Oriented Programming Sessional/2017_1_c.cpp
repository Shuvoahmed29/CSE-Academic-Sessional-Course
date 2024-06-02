#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void set(int aa)
    {
        a = aa;
    }
    friend class B;
};
class B : public A
{
    int b;

public:
    void set_ab(int aa, int bb)
    {
        set(aa);
        b = a + bb;
    }
    void show()
    {
        cout << b << endl;
    }
};
int main()
{
    B obj;
    obj.set_ab(22, 30);
    obj.show();
}