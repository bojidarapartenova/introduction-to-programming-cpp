#include <iostream>

bool areEqual(int **matrix1, int **matrix2, int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    int **matrix1 = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        matrix1[i] = new int[m];
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> matrix1[i][j];
        }
    }

    int **matrix2 = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        matrix2[i] = new int[m];
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> matrix2[i][j];
        }
    }

    if (areEqual(matrix1, matrix2, n, m))
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;
}