#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    vector<int> x;
    void set_value(vector<int> x)
    {
        this->x = x;
    }
    void CLEAR()
    {
        x.clear();
    }
    void set()
    {
        x.push_back(5);
        x.push_back(18);
        x.push_back(9);
        x.push_back(11);
    }
    void display()
    {
        for (auto it : x)
            cout << it << endl;
    }
};
int main()
{
    vector<int> v1{4, 18, 9, 12, 33};
    A obj;
    obj.set_value(v1);
    obj.CLEAR();
    obj.set();
    obj.display();
}