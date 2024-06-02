#include <bits/stdc++.h>
using namespace std;
class salary
{
public:
    int basic_salary, bonus, other_bonus, tolal;
    void set_basic_salary(int basic_salary)
    {
        this->basic_salary = basic_salary;
    }
    void set_bonus(int bonus)
    {
        this->bonus = bonus;
    }
    void set_other_bonus(int other_bonus)
    {
        this->other_bonus = other_bonus;
    }
    void display()
    {
        tolal = basic_salary + bonus + other_bonus;
        cout << "Total Monthly Salary: " << tolal << endl;
    }
};
int main()
{
    salary employee1;
    int x, y, z;
    cout << "Basics Monthly salary: ";
    cin >> x;
    employee1.set_basic_salary(x);
    cout << "Monthly bonus: ";
    cin >> z;
    employee1.set_bonus(z);
    cout << "Other Monthly Salary :";
    cin >> y;
    employee1.set_other_bonus(y);
    employee1.display();
}