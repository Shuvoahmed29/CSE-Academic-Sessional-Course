#include <bits/stdc++.h>
using namespace std;
class circle
{
public:
    int r;
    void set_data(int R)
    {
        r = R;
    }
    virtual void area() = 0;
};
class Area : public circle
{
public:
    void area()
    {
        cout << 3.1416 * r * r << endl;
    }
};
int main()
{
    Area obj;
    obj.set_data(10);
    obj.area();
}