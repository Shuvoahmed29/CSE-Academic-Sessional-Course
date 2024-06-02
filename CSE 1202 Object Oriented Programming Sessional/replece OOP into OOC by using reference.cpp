#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    string s;
    A(string s1)
    {
        s = s1;
    }
    void set_value()
    {
        s = "OOC";
    }
    string get_data()
    {
        return s;
    }
};
int main()
{
    A obj("OOP");
    A &obj2 = obj;
    obj2.set_value();
    cout << obj2.get_data() << endl;
}