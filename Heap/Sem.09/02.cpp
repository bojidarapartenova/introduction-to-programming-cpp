#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    if (n <= 0 || m <= 0)
        return 0;

    int **dynamicMatrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        dynamicMatrix[i] = new int[m];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> dynamicMatrix[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] dynamicMatrix[i];
    }
    delete[] dynamicMatrix;
}