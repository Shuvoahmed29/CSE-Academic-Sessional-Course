#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    int roll;
    myClass(int r)
    {
        roll = r;
    }
    myClass()
    {
        roll = 0;
    }
    void operator++(int)
    {
        roll = roll + 1;
    }
    void operator++()
    {
        roll = roll + 1;
    }
    void show()
    {
        cout << "Roll : " << roll << endl;
    }
};
int main()
{
    myClass ob1(10), ob2;
    ob1++;
    ++ob2;
    ob1.show();
    ob2.show();
}