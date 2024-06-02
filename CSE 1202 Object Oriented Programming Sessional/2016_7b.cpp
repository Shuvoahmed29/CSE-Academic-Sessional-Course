#include <bits/stdc++.h>
using namespace std;
class area
{
    int length, width;
    int a, b, h;

public:
    void set_data(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    virtual void Area() = 0;
    virtual void Area1() = 0;
    void set(int a1, int b1, int h1)
    {
        a = a1;
        b = b1;
        h = h1;
    }
    friend class drive;
};
class drive : public area
{
public:
    void Area()
    {
        cout << "Regtangle Area: " << length * width << endl;
    }
    void Area1()
    {
        cout << "Trapizuam Area: " << 0.5 * (a + b) * h << endl;
    }
};
int main()
{
    drive obj;
    obj.set_data(10, 20);
    obj.set(10, 20, 30);
    obj.Area();
    obj.Area1();
}