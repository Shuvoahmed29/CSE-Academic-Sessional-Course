#include <bits/stdc++.h>
using namespace std;
template <class T>
int Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    return 0;
}
int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout << a << " " << b << endl;
}