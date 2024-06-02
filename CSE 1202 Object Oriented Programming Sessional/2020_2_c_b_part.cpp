#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
};
class B : public A
{
    int b;

public:
    B(int aa, int bb)
    {
        b = bb;
        a = aa;
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
    return 0;
}