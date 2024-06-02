#include <bits/stdc++.h>
using namespace std;
class myClass
{
    int roll, roll1;

public:
    myClass()
    {
        roll = 0;
        roll1 = 0;
    }
    void set_data(int a, int b)
    {
        roll = a;
        roll1 = b;
    }
    void show()
    {
        cout << roll << endl;
        cout << roll1 << endl;
    }
    void operator+=(myClass t)
    {
        roll = roll + t.roll;
        roll1 = roll1 + t.roll1;
    }
    void operator-=(myClass t)
    {
        roll = roll - t.roll;
        roll1 = roll1 - t.roll1;
    }
};
int main()
{
    myClass ob1, ob2;
    ob1.set_data(10, 20);
    ob2.set_data(2, 1);
    ob1 += ob2;
    ob1.show();
    ob1 -= ob2;
    ob1.show();
}