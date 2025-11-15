#include <iostream>
const int ROWS = 2;
const int COLS = 3;
const int MAX_SIZE = 100;

void printMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

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
        if (i % 2 == 0)
        {
            for (int j = 0; j < COLS; j++)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = COLS - 1; j >= 0; j--)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

bool isMatrixTriangle(int matrix[ROWS][COLS])
{
    bool result = true;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i > j)
            {
                if (matrix[i][j] != 0)
                    result = false;
            }
        }
    }
    return result;
}

void transposeMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = i + 1; j < COLS; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printMatrix(matrix);
}

bool isMatrixMagic(int matrix[ROWS][COLS])
{
    int sum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        sum += matrix[0][i];
    }

    // rows
    for (int i = 1; i < ROWS; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++)
        {
            rowSum += matrix[i][j];
        }

        if (rowSum != sum)
        {
            return false;
        }
    }

    // columns
    for (int i = 0; i < COLS; i++)
    {
        int colSum = 0;
        for (int j = 0; j < ROWS; j++)
        {
            colSum += matrix[j][i];
        }

        if (colSum != sum)
        {
            return false;
        }
    }

    // primary diagonal
    int primaryDiagonalSum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        primaryDiagonalSum += matrix[i][i];
    }

    if (primaryDiagonalSum != sum)
    {
        return false;
    }

    // secondary diagonal
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        secondaryDiagonalSum += matrix[i][ROWS - 1 - i];
    }
    if (secondaryDiagonalSum != sum)
    {
        return false;
    }
    return true;
}

void sumMatrix(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS])
{
    int sum[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printMatrix(sum);
}

void multiplyMatrixBy(int matrix[ROWS][COLS], int num)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] *= num;
        }
    }
    printMatrix(matrix);
}

void multiplyMatrix(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE])
{
    int n, m, p;
    std::cin >> n >> m >> p;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            std::cin >> matrix2[i][j];
        }
    }

    int result[n][p];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printSpiral(int matrix[ROWS][COLS])
{
    
}

int main()
{
    // int matrix[ROWS][COLS];

    // for (int i = 0; i < ROWS; i++)
    // {
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         std::cin >> matrix[i][j];
    //     }
    // }

    // std::cout << smallestInMatrix(matrix);
    // printDiagonals(matrix);
    // printZigZagMatrix(matrix);
    // std::cout << isMatrixTriangle(matrix);
    // transposeMatrix(matrix);
    //(isMatrixMagic(matrix)) ? std::cout << "yes" : std::cout << "no";

    // int matrix2[ROWS][COLS];
    // for (int i = 0; i < ROWS; i++)
    // {
    //     for (int j = 0; j < COLS; j++)
    //     {
    //         std::cin >> matrix2[i][j];
    //     }
    // }
    // sumMatrix(matrix, matrix2);

    // int num;
    // std::cin >> num;
    // multiplyMatrixBy(matrix, num);

    // int matrix1[MAX_SIZE][MAX_SIZE];
    // int matriz2[MAX_SIZE][MAX_SIZE];
    // multiplyMatrix(matrix1, matriz2);
}