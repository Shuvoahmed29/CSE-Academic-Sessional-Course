//Binary Search.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;
    sort(arr,arr+n);
    int low = 0,high=n;
    cout << "Enter search element: ";
    int src;
    cin >> src;
    int p=0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==src){
            cout << "Number is found at "<<mid+1 << " index!!\n";
            p=1;
            break;
        }
        else if(arr[mid]>src) high = mid-1;
        else if(arr[mid] < src) low = mid+1;
    }
    if(p==0){
        cout << "Number is no found!!\n";
    }
}
