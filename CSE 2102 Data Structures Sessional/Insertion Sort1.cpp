#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;

    int j,key;
    for(int i=0; i<n; i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(auto d:arr)   cout << d << " " ;
}
