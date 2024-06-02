#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    static int cunt;
    test()
    {
        cunt++;
    }
    ~test()
    {
        cunt--;
    }
    static void show()
    {
        cout << "Count:" << cunt << endl;
    }
};
int test::cunt;
int main()
{
    test t1, t2;
    test::show(); // 2

    test t3;
    test::show(); // 3
}