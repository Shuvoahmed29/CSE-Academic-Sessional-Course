// 5.Insertion Sort.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of array elements: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nBefore sort!!\n";
    for (int d : arr)
        cout << d << " ";
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "\nAfter sort!!\n";
    for (int d : arr)
        cout << d << " ";
}