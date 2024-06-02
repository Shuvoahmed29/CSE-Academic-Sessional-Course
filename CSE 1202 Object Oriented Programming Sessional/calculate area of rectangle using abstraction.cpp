#include <iostream>
using namespace std;
class rectangle
{
public:
    int length, height;
    void set_value(int length, int height)
    {
        this->length = length;
        this->height = height;
    }
    virtual void area() = 0;
};
class drive : public rectangle
{
public:
    void area()
    {
        cout << length * height << endl;
    }
};
int main()
{
    drive obj;
    obj.set_value(10, 20);
    obj.area();
}