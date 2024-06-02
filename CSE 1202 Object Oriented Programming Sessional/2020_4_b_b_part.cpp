#include <bits/stdc++.h>
using namespace std;
template <class T>
void Sort(T a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    }
}
int main()
{
    int arr[] = {10, 9, 0, 20, -23};
    Sort(arr);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
}