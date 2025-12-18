#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n <= 0)
        return 0;

    int **matrix = new int *[n];
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    std::cout << sum;
}