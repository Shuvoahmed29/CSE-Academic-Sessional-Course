#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int first, int last)
{
    int mid = (first+last)/2;
    int pivot = arr[first];

    int cunt = 0;
    for(int i=first+1; i<=last; i++)
    {
        if(pivot>=arr[i]) cunt++;
    }

    int pivot_index = first+cunt;
    swap(arr[first],arr[pivot_index]);

    int i=first,j=last;

    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<pivot)i++;
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
    if(first>=last)
        return;
    int p = part(arr,first,last);
    quick_sort(arr,first,p-1);
    quick_sort(arr,p+1,last);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(auto &d:arr)    cin >> d;

    quick_sort(arr,0,n-1);

    for(auto d:arr)   cout << d << " " ;
}


