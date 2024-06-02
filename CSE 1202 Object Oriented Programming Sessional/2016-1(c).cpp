#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;

public:
    void set(int aa)
    {
        a = aa;
    }
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
    obj.set_ab(10, 20);
    obj.show();
}