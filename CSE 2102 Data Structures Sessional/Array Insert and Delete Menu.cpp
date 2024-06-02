#include <bits/stdc++.h>
using namespace std;
void print_array(vector<int> array)
{
    system("CLS");
    if (array.size() == 0)
        cout << "Array is Empty!!" << endl;
    else
    {
        cout << "Array is: ";
        for (int i = 0; i < array.size(); i++)
            cout << array[i] << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> array;
    while (1)
    {
        cout << "1. Pess 'I' for insert!!" << endl;
        cout << "2. Pess 'D' for delete!!" << endl;
        cout << "3. Pess any for Exit!!" << endl;
        int temp = 0;
        char ch;
        cin >> ch;

        if (ch == 'I' || ch == 'i')
        {
            cout << endl
                 << "Enter element to insert: ";
            int x;
            cin >> x;
            array.push_back(x);
            temp++;
            print_array(array);
        }
        else if (ch == 'D' || ch == 'd')
        {
            array.pop_back();
            print_array(array);
        }
        else
        {
            system("CLS");
            return 0;
        }
    }
}