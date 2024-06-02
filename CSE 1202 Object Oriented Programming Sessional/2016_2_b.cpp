#include <iostream>
using namespace std;
class salary
{
    double work_time;
    double hourly_rate;
    double over_time;
    double over_pay;
    double grosspay;

public:
    void set_data()
    {
        cout << "Enter work hour: ";
        cin >> work_time;
        cout << "Enter hourly rate: ";
        cin >> hourly_rate;
    }
    void gross_pay()
    {
        if (work_time > 12)
        {
            over_time = work_time - 12;
            work_time = 12;
            over_pay = (over_time) * (1.5 * hourly_rate);
        }
        grosspay = over_pay + (work_time * hourly_rate);
        cout << "Gross Monthly Pay: " << grosspay * 30 << endl;
    }
};
int main()
{
    salary obj;
    obj.set_data();
    obj.gross_pay();
}