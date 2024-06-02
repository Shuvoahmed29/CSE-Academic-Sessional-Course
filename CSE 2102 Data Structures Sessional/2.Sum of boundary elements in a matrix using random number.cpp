// 2.Sum of boundary elements in a matrix using random number.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter row number: ";
    int row;
    cin >> row;
    cout << "Enter column number: ";
    int col;
    cin >> col;
    int matrix[row][col];
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 10;
            if (i == 0 || i == row - 1)
                sum += matrix[i][j];
            if (j == 0 && i != 0 && i != row - 1)
                sum += matrix[i][j];
            if (j == col - 1 && i != 0 && i != row - 1)
                sum += matrix[i][j];
        }
    }
    cout << "Matrix is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSummation: " << sum << endl;
}