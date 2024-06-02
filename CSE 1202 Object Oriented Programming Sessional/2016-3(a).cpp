#include <bits/stdc++.h>
using namespace std;
class myclass
{
private:
    int a;
    float b;

public:
    myclass(int a, float b)
    {
        this->a = a;
        this->b = b;
    }
    myclass(float b)
    {
        this->b = b;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    void show2()
    {
        cout << b << endl;
    }
};
int main()
{
    myclass obj = myclass(10, 15.5);
    obj.show();
    myclass obj2 = 10.5;
    obj2.show2();
}