// 4.Bubble Sort.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nBefore sort!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << "\nAfter sort!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}