//Quick Sort.cpp
#include<bits/stdc++.h>
using namespace std;

int partitional(int arr[], int start, int stop)
{
    int pivot = arr[start];
    int cunt = 0;
    for(int i=start+1; i<=stop;i++)
    {
        if(pivot>=arr[i]) cunt++;
    }
    int pivot_index = cunt+start;
    swap(arr[pivot_index],arr[start]);

    int i=start,j=stop;

    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivot_index && j>pivot_index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
  return pivot_index;
}

void quick_sort(int arr[], int first, int last)
{

    if(first >= last) return;
    int p = partitional(arr,first,last);
    quick_sort(arr,first,p-1);
    quick_sort(arr,p+1,last);
}

int main()
{
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nBefore quick sort!!\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    quick_sort(arr,0,n-1);

    cout << "\nAfter quick sort!!\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
