#include <iostream>

int **Transpose(int **matrix, int n, int m)
{
    int **transposed = new int *[m];
    for (size_t i = 0; i < m; i++)
    {
        transposed[i] = new int[n];
        for (size_t j = 0; j < n; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }

    return transposed;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    if (n <= 0 || m <= 0)
        return 0;

    int **matrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    int **transposed = Transpose(matrix, n, m);
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (size_t i = 0; i < m; i++)
    {
        delete[] transposed[i];
    }
    delete[] transposed;
}