#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    int a, b;
    base(int c, int d)
    {
        a = c;
        b = d;
    }
    base(base &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    void show()
    {
        cout << "a: " << a << "  b: " << b << endl;
    }
};
int main()
{
    base A(10, 20);
    A.show();
    base B(A);
    B.show();
}