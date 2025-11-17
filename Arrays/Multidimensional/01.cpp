#include <iostream>
const int MAX = 100;

void printMatrix(int matrix[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int smallestInMatrix(int matrix[][MAX], int n, int m)
{
    int smallest = matrix[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] < smallest)
            {
                smallest = matrix[i][j];
            }
        }
    }
    return smallest;
}

void printDiagonals(int matrix[][MAX], int n, int m)
{
    std::cout << "Main diagonal: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Secondary diagonal: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i + j) == (n - 1))
            {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
}

void printZigZagMatrix(int matrix[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

bool isMatrixTriangle(int matrix[][MAX], int n, int m)
{
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
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

void transposeMatrix(int matrix[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printMatrix(matrix, n, m);
}

bool isMatrixMagic(int matrix[][MAX], int n, int m)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += matrix[0][i];
    }

    // rows
    for (int i = 1; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum += matrix[i][j];
        }

        if (rowSum != sum)
        {
            return false;
        }
    }

    // columns
    for (int i = 0; i < m; i++)
    {
        int colSum = 0;
        for (int j = 0; j < n; j++)
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
    for (int i = 0; i < n; i++)
    {
        primaryDiagonalSum += matrix[i][i];
    }

    if (primaryDiagonalSum != sum)
    {
        return false;
    }

    // secondary diagonal
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }
    if (secondaryDiagonalSum != sum)
    {
        return false;
    }
    return true;
}

void sumMatrix(int matrix1[][MAX], int matrix2[][MAX], int n, int m)
{
    int sum[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printMatrix(sum, n, m);
}

void multiplyMatrixBy(int matrix[][MAX], int n, int m, int num)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] *= num;
        }
    }
    printMatrix(matrix, n, m);
}

void multiplyMatrix(int matrix1[][MAX], int matrix2[][MAX], int n, int m, int p)
{
    int result[MAX][MAX];

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

    printMatrix(result, n, p);
}

void printSpiral(int matrix[][MAX], int n, int m)
{
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            std::cout << matrix[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            std::cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

void rotateMatrixToRight(int matrix[][MAX], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n, m;

    std::cout << "Enter number of rows and columns: ";
    std::cin >> n >> m;

    int matrix[MAX][MAX];

    std::cout << "Enter matrix elements: " << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // std::cout << smallestInMatrix(matrix, n, m);
    // printDiagonals(matrix, n, m);
    // printZigZagMatrix(matrix, n, m);
    // std::cout << isMatrixTriangle(matrix, n, m);
    // transposeMatrix(matrix, n, m);
    //(isMatrixMagic(matrix, n, m)) ? std::cout << "yes" : std::cout << "no";

    // int matrix2[MAX][MAX];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         std::cin >> matrix2[i][j];
    //     }
    // }
    // sumMatrix(matrix, matrix2, n, m);

    // int num;
    // std::cin >> num;
    // multiplyMatrixBy(matrix, n, m, num);

    // int matrix2[MAX][MAX];

    // int p;
    // std::cout << "Enter number of columns of second matrix: ";
    // std::cin >> p;

    // std::cout << "Enter second matrix elements: " << std::endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < p; j++)
    //     {
    //         std::cin >> matrix2[i][j];
    //     }
    // }
    // multiplyMatrix(matrix, matrix2, n, m, p);

    // printSpiral(matrix, n, m);
    // rotateMatrixToRight(matrix, n, m);
}