#include <iostream>

int main()
{
    int n, m, q;
    std::cin >> n >> m >> q;

    int ***matrix3D = new int **[n];
    for (size_t i = 0; i < n; i++)
    {
        matrix3D[i] = new int *[m];
        for (size_t j = 0; j < m; j++)
        {
            matrix3D[i][j] = new int[q];
            for (size_t k = 0; k < q; k++)
            {
                std::cin >> matrix3D[i][j][k];
            }
        }
    }

    for (size_t j = 0; j < m; j++)
    {
        for (size_t k = 0; k < q; k++)
        {
            delete[] matrix3D[j][k];
        }
        delete[] matrix3D[j];
    }
    delete[] matrix3D;
}