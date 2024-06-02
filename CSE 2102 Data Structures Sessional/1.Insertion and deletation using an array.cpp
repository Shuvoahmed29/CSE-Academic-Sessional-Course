// 1.Insertion and deletation using an array.cpp
#include <bits/stdc++.h>
using namespace std;
int cunt = 0;
int arr[10000];
void display()
{
    if (cunt == 0)
        cout << "Array is empty!!\n"
             << endl;
    else
    {
        cout << "Array is: ";
        for (int i = 0; i < cunt; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{
    while (1)
    {
        system("cls");
        display();
        cout << "Enter I for inser element!\n";
        cout << "Enter D for delete element!\n";
        cout << "Enter any for exit!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'I' || ch == 'i')
        {
            cout << "\nEnter element for insert: ";
            int n;
            cin >> n;
            arr[cunt] = n;
            cunt++;
        }
        else if (ch == 'D' || ch == 'd')
        {
            if (cunt == 0)
            {
                cout << "\nNo element for delete!!\n";
                _sleep(1000);
            }
            else
                cunt--;
        }
        else
            break;
    }
}