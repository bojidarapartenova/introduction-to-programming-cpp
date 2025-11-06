#include <iostream>
const int ROWS_SIZE = 2;
const int COLS_SIZE = 3;

void printMatrix(int matrix[ROWS_SIZE][COLS_SIZE])
{
    for (int i = 0; i < ROWS_SIZE; i++)
    {
        for (int j = 0; j < COLS_SIZE; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void transposeMatrix(int matrix[ROWS_SIZE][COLS_SIZE])
{
    for (int i = 0; i < COLS_SIZE; i++)
    {
        for (int j = 0; j < ROWS_SIZE; j++)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int matrix[ROWS_SIZE][COLS_SIZE] = {{1, 2, 3}, {4, 5, 6}};
    std::cout << "matrix:" << std::endl;
    printMatrix(matrix);
    std::cout << std::endl;

    std::cout << "transposed matrix:" << std::endl;
    transposeMatrix(matrix);
}