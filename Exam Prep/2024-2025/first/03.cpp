#include <iostream>
const int MAX_SIZE = 100;

int *spiralRead(const int **matrix, size_t rows, size_t cols)
{
    int *res = new int[rows * cols];
    int index = 0;

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            res[index++] = matrix[bottom][i];
        }
        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            res[index++] = matrix[i][right];
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                res[index++] = matrix[top][i];
            }
            top++;
        }

        if (left <= right)
        {
            for (int i = top; i <= bottom; i++)
            {
                res[index++] = matrix[i][left];
            }
            left++;
        }
    }
    return res;
}

int main()
{
    int rows, cols;
    std::cin >> rows >> cols;

    int **matrix = new int *[rows];
    for (size_t i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
        for (size_t j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    int *res = spiralRead((const int **)matrix, rows, cols);

    for (size_t i = 0; i < rows * cols; i++)
    {
        std::cout << res[i] << " ";
    }

    for (size_t i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    delete[] res;
}