#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[4], sum = 0;
    for (int i = 0; i < 4; i++)
    {
        matrix[i] = rand() % 100;
        sum += matrix[i];
    }
    cout << "Matrix is: ";
    cout << matrix[0] << " " << matrix[1] << endl;
    cout << "           ";
    cout << matrix[2] << " " << matrix[3] << endl;

    cout << "Sumation of Boundary elements is: " << sum << endl;
}