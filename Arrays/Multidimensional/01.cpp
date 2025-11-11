#include <iostream>
const int ROWS = 3;
const int COLS = 3;

int smallestInMatrix(int matrix[ROWS][COLS])
{
    int smallest = matrix[1][1];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] < smallest)
            {
                smallest = matrix[i][j];
            }
        }
    }
    return smallest;
}

void printDiagonals(int matrix[ROWS][COLS])
{
    std::cout << "Main diagonal: ";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Secondary diagonal: ";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if ((i + j) == (ROWS - 1))
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
}

void printZigZagMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j % 2 != 0)
            {
            }
        }
    }
}

int main()
{
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // std::cout << smallestInMatrix(matrix);
    // printDiagonals(matrix);
}