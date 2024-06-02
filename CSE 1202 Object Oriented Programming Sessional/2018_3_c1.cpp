#include <bits/stdc++.h>
using namespace std;
class contructor
{
public:
    int x, y;
    contructor(int a = 10, int b = 20)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    contructor objBix;
    objBix.display();
}