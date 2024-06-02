//12. Circular queue implementation using array.cpp
#include<bits/stdc++.h>
using namespace std;
int font = 0, rear = 0;
int cunt = 0;
void display(int arr[], int Size)
{
    if(rear<=font)
    {
        cout << "Queue is empty!!\n";
    }
    else
    {
        cout << "Queue is: ";
        for(int i = 0; i<cunt; i++)
        {
            cout << arr[(font+i)%Size] << " ";
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
        display(arr,Size);
        cout << "\nEnter I for insert element!\n";
        cout << "Enter D for delete element!\n";
        cout << "Enter any for exit!\n";
        cout << "\nEnter your choice: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            if(cunt > Size-1)
            {
                cout << "Queue Overflow!!\n";
                _sleep(1000);
            }
            else
            {
                cout << "\nEnter element for insert: ";
                int n;
                cin >> n;
                arr[rear%Size] = n;
                rear++;
                cunt++;
            }
        }
        else if(ch == 'd' || ch == 'D')
        {
            if(cunt <= 0)
            {
                cout << "Queue Underflow!!\n";
                _sleep(1000);
            }
            else
            {
                font = font+1;
                cunt--;
            }
        }
        else break;
    }
}
