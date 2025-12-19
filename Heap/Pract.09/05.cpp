#include <iostream>

int *concatRows(int *row1, int len1, int *row2, int len2)
{
    int *result = new int[len1 + len2];
    for (size_t i = 0; i < len1; i++)
    {
        result[i] = row1[i];
    }
    for (size_t i = 0; i < len2; i++)
    {
        result[i + len1] = row2[i];
    }
    return result;
}

int **processMatrix(int **matrix, int *rows, int n)
{
    int **newMatrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        int *firstRow = matrix[n - 1 - i];
        int firstLen = rows[n - 1 - i];

        int *lastRow = matrix[i];
        int lastLen = rows[i];

        newMatrix[i] = concatRows(firstRow, firstLen, lastRow, lastLen);
    }
    return newMatrix;
}

int main()
{
    int n;
    std::cin >> n;

    int **matrix = new int *[n];
    int *rows = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;
        rows[i] = m;
        matrix[i] = new int[m];
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    int **newMatrix = processMatrix(matrix, rows, n);
    for (size_t i = 0; i < n; i++)
    {
        int newLen = rows[n - 1 - i] + rows[i];
        for (size_t j = 0; j < newLen; j++)
        {
            std::cout << newMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] matrix[i];
        delete[] newMatrix[i];
    }
    delete[] matrix;
    delete[] newMatrix;
    delete[] rows;
}