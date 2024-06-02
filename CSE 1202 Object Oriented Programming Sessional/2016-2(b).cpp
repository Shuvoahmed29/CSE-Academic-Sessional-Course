#include <bits/stdc++.h>
using namespace std;
class salary
{
public:
    int basic;
    int bonos;
    int extra;

    void set_basic(int basic)
    {
        this->basic = basic;
    }
    void set_bonos(int bonos)
    {
        this->bonos = bonos;
    }
    void set_extra(int extra)
    {
        this->extra = extra;
    }
    void show()
    {
        cout << "Total Salary: " << basic + bonos + extra << endl;
    }
};
int main()
{
    salary obj;
    obj.set_basic(10000);
    obj.set_bonos(2000);
    obj.set_extra(1000);
    obj.show();
}