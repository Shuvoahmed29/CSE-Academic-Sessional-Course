#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    static int cunt;
    A()
    {
        cunt++;
    }
    ~A()
    {
        cunt--;
    }
    static void show()
    {
        cout << "Cunt: " << cunt << endl;
    }
};
int A::cunt;
int main()
{
    A obj;
    A obj2;
    A obj3;
    A::show();
}