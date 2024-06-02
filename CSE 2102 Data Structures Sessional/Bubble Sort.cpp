//Bubble Sort.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(auto d:arr) cout << d << " ";
}
