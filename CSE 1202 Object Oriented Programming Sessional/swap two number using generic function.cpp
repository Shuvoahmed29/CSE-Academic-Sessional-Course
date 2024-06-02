#include <bits/stdc++.h>
using namespace std;
template <class T>
void SWAP(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    SWAP(a, b);
    cout << a << " " << b << endl;
}
