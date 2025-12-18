#include <iostream>

int main()
{
    int n, m, q;
    std::cin >> n >> m >> q;
    if (n <= 0 || m <= 0 || q <= 0)
        return 0;

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

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            delete matrix3D[i][j];
        }
        delete[] matrix3D[i];
    }
    delete[] matrix3D;
}