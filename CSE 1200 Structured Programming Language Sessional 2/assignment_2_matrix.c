/*............11. Matrix:.............*/

//1. Write a C program for addition of two matrices.
/*#include <stdio.h>
int main()
{
    int n, row1, col1, row2, col2, i, j;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row1, &col1);
    int A[row1][col1];
    printf("Enter row & coluam Number for Second matrix = ");
    scanf("%d%d", &row2, &col2);
    int B[row2][col2];
    while (row1 != row2 || col1 != col2)
    {
        printf("ERROR!!!! You need First matrix row&col number must be equal Second matrix row&col Number\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row1, &col1);
        int A[row1][col1];
        printf("Enter row & coluam Number for Second matrix = ");
        scanf("%d%d", &row2, &col2);
        int B[row2][col2];
    }
    int C[row1][col1];
    printf("\nEnter the value of first matrix.\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the value of Second matrix.\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nA + B = ");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}*/

//2. Write a C program for subtraction of two matrices.
/*#include <stdio.h>
int main()
{
    int n, row1, col1, row2, col2, i, j;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row1, &col1);
    int A[row1][col1];
    printf("Enter row & coluam Number for Second matrix = ");
    scanf("%d%d", &row2, &col2);
    int B[row2][col2];
    while (row1 != row2 || col1 != col2)
    {
        printf("ERROR!!!! You need First matrix row&col number must be equal Second matrix row&col Number\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row1, &col1);
        int A[row1][col1];
        printf("Enter row & coluam Number for Second matrix = ");
        scanf("%d%d", &row2, &col2);
        int B[row2][col2];
    }
    int C[row1][col1];
    printf("\nEnter the value of first matrix.\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the value of Second matrix.\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nA - B = ");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}*/

//3. Write a C program for multiplication of two matrices.
/*#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row1, &col1);
    printf("Enter row & coluam Number for Second matrix = ");
    scanf("%d%d", &row2, &col2);
    while (col1 != row2)
    {
        printf("ERROR!!! First matrix col & Second matrix row must be equal.\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row1, &col1);
        printf("Enter row & coluam Number for Second matrix = ");
        scanf("%d%d", &row2, &col2);
    }
    int A[row1][col1], B[row2][col2], i, j, k, sum = 0, result[row1][col2];
    printf("\nEnter A matrix Value.\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter B matrix Value.\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("\nA x B= ");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}*/

//4. Write a C program to find out sum of diagonal element of a matrix.
/*#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row, &col);
    int A[row][col], i, j, sum = 0;
    printf("Enter the value of A matrix.\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = A[i][j] + sum;
            }
        }
    }
    printf("\nDiagonal element of A matrix is = %d\n", sum);
    return 0;
}*/

//5. Write a C program find out transport of a matrix.
/*#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row, &col);
    while (row != col)
    {
        printf("ERROR!!! Row & Col must be equal.\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row, &col);
    }
    int A[row][col], B[row][col], i, j;
    printf("Enter the value of A matrix.\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nTransport of A matrix is.\n");
    printf("Matrx=  ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}*/

//8. Lower triangular matrix in C.
/*#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row, &col);
    while (row != col)
    {
        printf("ERROR!!! Row & Col must be equal.\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row, &col);
    }
    int A[row][col], i, j, sum = 0;
    printf("Enter the value of A matrix.\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = i + 1; j < row; j++)
        {
            sum = sum + A[i][j];
        }
    }
    printf("\nSum of lower triangular matrix is = %d\n", sum);
    return 0;
}*/

//9. Upper triangular matrix in C.
/*#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row & coluam Number for First matrix = ");
    scanf("%d%d", &row, &col);
    while (row != col)
    {
        printf("ERROR!!! Row & Col must be equal.\n");
        printf("Enter row & coluam Number for First matrix = ");
        scanf("%d%d", &row, &col);
    }
    int A[row][col], i, j, sum = 0;
    printf("Enter the value of A matrix.\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < col; i++)
    {
        for (j = i + 1; j < col; j++)
        {
            sum = sum + A[j][i];
        }
    }
    printf("\nSum of Upper triangular matrix is = %d\n", sum);
    return 0;
}*/