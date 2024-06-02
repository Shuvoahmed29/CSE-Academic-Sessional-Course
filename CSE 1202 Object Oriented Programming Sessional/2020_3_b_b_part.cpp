#include <bits/stdc++.h>
using namespace std;
class circle
{
public:
    virtual void area() = 0;
};
class circleArea : public circle
{
public:
    int radius;
    void set_data(int radius)
    {
        this->radius = radius;
    }
    void area()
    {
        cout << "Area: " << 3.14159 * radius * radius << endl;
    }
};
int main()
{
    circleArea C;
    cout << "Enter Circle Radius: ";
    int r;
    cin >> r;
    C.set_data(r);
    C.area();
}