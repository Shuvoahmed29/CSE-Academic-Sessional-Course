#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;

    int mini,index =-1;
    for(int i=0; i<n; i++)
    {
        mini = arr[i];
        index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<mini)
            {
                mini = arr[j];
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(auto d:arr)   cout << d << " " ;
}

