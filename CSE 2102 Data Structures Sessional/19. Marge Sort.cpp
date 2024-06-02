//19. Marge Sort.cpp
#include<bits/stdc++.h>
using namespace std;
void marge_array(int arr[],int start, int stop)
{
    int mid = (start+stop)/2;
    int len1 = mid-start+1;
    int len2 = stop - mid;
    int arr1[len1];
    int arr2[len2];
    int index = start;
    for(int i=0; i<len1; i++)
    {
        arr1[i] = arr[index++];
    }
    index = mid+1;
    for(int i=0; i<len2; i++)
    {
        arr2[i] = arr[index++];
    }

    index = start;
    int idx1=0,idx2=0;
    while(idx1<len1 && idx2<len2)
    {
        if(arr2[idx2]>arr1[idx1])
        {
            arr[index++] = arr1[idx1++];
        }
        else
        {
            arr[index++] = arr2[idx2++];
        }
    }

    while(idx1<len1)
    {
        arr[index++] = arr1[idx1++];
    }
    while(idx2<len2)
    {
        arr[index++] = arr2[idx2++];
    }
}

void marge_sort(int arr[], int first, int last)
{
    if(first>=last) return;
    int mid = (first+last)/2;
    marge_sort(arr,first,mid);
    marge_sort(arr,mid+1,last);
    marge_array(arr,first,last);
}
int main()
{
    cout << "Enter number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "\Before marge sort!!\n";
    for(int d:arr)
    {
        cout << d << " ";
    }

    marge_sort(arr,0,n-1);

    cout << "\nAfter marge sort!!\n";
    for(int i=0; i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
