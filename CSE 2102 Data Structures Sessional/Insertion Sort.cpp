//Insertion Sort.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;

    int key,j;
    for(int i=0; i<n; i++)
    {
        j = i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(auto d:arr)
    {
        cout << d << " ";
    }
}
