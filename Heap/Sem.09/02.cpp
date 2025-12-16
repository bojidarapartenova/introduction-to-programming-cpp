#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int **dynamicMatrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        dynamicMatrix[i] = new int[m];
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] dynamicMatrix[i];
    }
    delete[] dynamicMatrix;
}