#include <bits/stdc++.h>
using namespace std;
class base
{
    int length, width;

public:
    void set_data(int a, int b)
    {
        length = a;
        width = b;
    }
    virtual void area() = 0;
    friend class drive;
};
class drive : public base
{
public:
    void area()
    {
        cout << "Area : " << length * width << endl;
    }
};
int main()
{
    drive obj;
    obj.set_data(10, 20);
    obj.area();
}