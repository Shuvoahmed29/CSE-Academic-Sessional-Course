#include <bits/stdc++.h>
using namespace std;
class example
{
    int a, b, c;

public:
    void set_data(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void display()
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};
int main()
{
    example obj;
    obj.set_data(10, -20, 30);
    cout << "Before .....\n";
    obj.display();
    cout << "After .....\n";
    -obj;
    obj.display();
}