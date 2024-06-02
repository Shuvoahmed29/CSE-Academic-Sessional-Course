//20.Quick Sort.cpp
#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int start,int stop)
{
    int pivot = arr[start];
    int cunt = 0;
    for(int i=start+1; i<=stop;i++)
    {
        if(pivot >= arr[i])
        {
            cunt++;
        }
    }
    int pivot_index = start+cunt;
    swap(arr[start],arr[pivot_index]);

    int i=start,j=stop;
    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]< pivot) i++;
        while(arr[i]> pivot) j--;
        if(i<pivot_index && j>pivot_index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;
}

void quick_sort(int arr[],int first,int last)
{
    if(first >= last)
    {
        return;
    }
    int p = part(arr,first,last);
    quick_sort(arr,first,p-1);
    quick_sort(arr,p+1,last);
}
int main()
{
    cout << "Enter array size: ";
    int n;  cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "\nBefore quick sort!\n";
    for(int d:arr)
    {
        cout << d << " ";
    }
    cout << endl;

    quick_sort(arr,0,n-1);

    cout << "\nAfter quick sort!\n";
    for(int d:arr)
    {
        cout << d << " ";
    }
}
