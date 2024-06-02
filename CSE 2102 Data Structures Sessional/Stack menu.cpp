#include <bits/stdc++.h>
using namespace std;
#define Max 1000
int arr[Max];
int cunt = 0, top = -1, item;
void Insert(int stack[], int item)
{
    if (top == Max)
        cout << "Stack Overflow....\n";
    else
    {
        top = top + 1;
        stack[top] = item;
        cunt++;
    }
}
void Delete(int stack[])
{
    if (top < 0)
        cout << "Stack Underflow.....\n";
    else
    {
        cunt--;
        top = top - 1;
    }
}
void Display(int stack[])
{
    system("CLS");
    if (top < 0)
        cout << "Stack is empty!\n";
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    while (1)
    {
        // system("CLS");
        cout << "Enter I for Insert.\n";
        cout << "Enter D for Delete.\n";
        cout << "Enter any for Exit.\n";

        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'I' || ch == 'i')
        {
            cout << "\nEnter your item: ";
            int item;
            cin >> item;
            Insert(arr, item);
            Display(arr);
        }
        else if (ch == 'D' || ch == 'd')
        {
            Delete(arr);
            Display(arr);
        }
        else
            break;
    }
}