//11. Queue implementation using array.cpp
#include<bits/stdc++.h>
using namespace std;
int font = 0, rear = 0;
void display(int arr[])
{
    if(rear<=font)
    {
        cout << "Queue is empty!!\n";
    }
    else
    {
        cout << "Queue is: ";
        for(int i = font; i<rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter array size: ";
    int Size;
    cin >> Size;
    int arr[Size];
    while(1)
    {
        system("cls");
        display(arr);
        cout << "\nEnter I for insert element!\n";
        cout << "Enter D for delete element!\n";
        cout << "Enter any for exit!\n";
        cout << "\nEnter your choice: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            if(rear > Size-1)
            {
                cout << "Queue Overflow!!\n";
                _sleep(1000);
            }
            else
            {
                cout << "\nEnter element for insert: ";
                int n;
                cin >> n;
                arr[rear] = n;
                rear++;
            }
        }
        else if(ch == 'd' || ch == 'D')
        {
            if(rear == font)
            {
                cout << "Queue Underflow!!\n";
                _sleep(1000);
            }
            else
            {
                font = font+1;
            }
        }
        else break;
    }
}
//FIFO
