//Stack using array.cpp
#include<bits/stdc++.h>
using namespace std;
int top = 0;
void display(int arr[],int top)
{
    if(top == 0)
    {
        cout << "Stack is empty!!\n";
    }
    else
    {
        cout << "Stack is: ";
        for(int i = top-1; i>=0; i--)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    cout << "Size: ";
    int n;
    cin >> n;
    int arr[n];
    while(1)
    {
        system("cls");
        display(arr,top);
        cout << "\n1.I for insert!!\n";
        cout <<"2.D for delete!!\n";
        cout << "3.Any for exit!!\n";
        cout << "\nEnter your choose: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            if(top > n-1)
            {
                cout << "\nStack Over flow!!\n";
                _sleep(1000);
            }
            else
            {
                cout << "\nEnter element: ";
                int data;
                cin >> data;
                arr[top++] = data;
            }
        }
        else if(ch == 'd' || ch == 'D')
        {
            if(top <= 0)
            {
                cout <<"\nStack Under flow!!\n";
                _sleep(1000);
            }
            else
            {
                top--;
            }
        }
        else break;
    }
}
