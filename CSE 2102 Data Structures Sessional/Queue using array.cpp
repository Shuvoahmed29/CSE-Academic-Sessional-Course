//Queue using array.cpp
#include<bits/stdc++.h>
using namespace std;
int font = 0, rear = 0, cunt = 0;
void display(int arr[],int n)
{
    if(rear == 0)
    {
        cout << "Queue is empty!!\n";
    }
    else
    {
        cout << "Queue is: ";
        for(int i = 0; i<cunt; i++)
        {
            cout << arr[(font+i)%n] << " ";
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
        display(arr,n);
        cout << "\n1.I for insert!!\n";
        cout <<"2.D for delete!!\n";
        cout << "3.Any for exit!!\n";
        cout << "\nEnter your choose: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            if(cunt > n-1)
            {
                cout << "\nQueue Over flow!!\n";
                _sleep(1000);
            }
            else
            {
                cout << "\nEnter element: ";
                int data;
                cin >> data;
                arr[rear%n] = data;
                rear++;
                cunt++;
            }
        }
        else if(ch == 'd' || ch == 'D')
        {
            if(cunt <= 0)
            {
                cout <<"\nQueue Under flow!!\n";
                _sleep(1000);
            }
            else
            {
                font++;
                if(cunt>0) cunt--;
            }
        }
        else break;
    }
}//FIFO
