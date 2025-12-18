#include <iostream>

int **multiplication(int **matrix1, int n, int m, int **matrix2, int p, int q)
{
    if (m != p)
        return 0;

    int **result = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        result[i] = new int[q];
        for (size_t j = 0; j < q; j++)
        {
            result[i][j] = 0;
            for (size_t k = 0; k < m; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main()
{
    int n, m, p, q;
    std::cin >> n >> m >> p >> q;

    if (n <= 0 || m <= 0 || p <= 0 || q <= 0)
        return 0;

    int **matrix1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix1[i] = new int[m];
        for (int j = 0; j < m; j++)
            std::cin >> matrix1[i][j];
    }

    int **matrix2 = new int *[p];
    for (int i = 0; i < p; i++)
    {
        matrix2[i] = new int[q];
        for (int j = 0; j < q; j++)
            std::cin >> matrix2[i][j];
    }

    int **result = multiplication(matrix1, n, m, matrix2, p, q);

    if (!result)
        return 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
            std::cout << result[i][j] << " ";
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
        delete[] result[i];
    delete[] result;

    for (int i = 0; i < n; i++)
        delete[] matrix1[i];
    delete[] matrix1;

    for (int i = 0; i < p; i++)
        delete[] matrix2[i];
    delete[] matrix2;
}