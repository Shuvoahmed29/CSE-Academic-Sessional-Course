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
    void operator++()
    { //++obj
        roll = roll + 1;
        roll1 = roll1 + 1;
    }
    void operator++(int)
    { // obj++
        roll = roll + 1;
        roll1 = roll1 + 1;
    }
    void show()
    {
        cout << roll << endl;
        cout << roll1 << endl;
    }
};
int main()
{
    myClass ob1, ob2;
    ob1.set_data(10, 20);
    ob2.set_data(1, 2);
    ++ob1;
    ob1.show();
    ob2++;
    ob2.show();
}