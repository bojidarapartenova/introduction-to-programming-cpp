#include <iostream>

void printArray(int size, int arr[])
{
    std::cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            std::cout << arr[i] << " ";
        }
        else
        {
            std::cout << arr[i] << "]";
        }
    }
}

void printIntersection(int n, int arr1[], int m, int arr2[], int result[])
{
    int resultPos = 0;

    for (int i = 0; i < n; i++)
    {
        bool isAdded = false;
        for (int j = 0; j < resultPos; j++)
        {
            if (result[j] == arr1[i])
            {
                isAdded = true;
                break;
            }
        }

        if (isAdded)
        {
            continue;
        }

        for (int k = 0; k < m; k++)
        {
            if (arr1[i] == arr2[k])
            {
                result[resultPos++] = arr1[i];
                break;
            }
        }
    }
    printArray(resultPos, result);
}

void printUnion(int n, int arr1[], int m, int arr2[], int result[])
{
    int resultPos = 0;

    for (int i = 0; i < n; i++)
    {
        bool isAdded = false;
        for (int j = 0; j < resultPos; j++)
        {
            if (result[j] == arr1[i])
            {
                isAdded = true;
                break;
            }
        }
        if (!isAdded)
        {
            result[resultPos++] = arr1[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        bool isAdded = false;
        for (int j = 0; j < resultPos; j++)
        {
            if (result[j] == arr2[i])
            {
                isAdded = true;
                break;
            }
        }
        if (!isAdded)
        {
            result[resultPos++] = arr2[i];
        }
    }
    printArray(resultPos, result);
}

int main()
{
    int n;
    std::cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr1[i];
    }

    int m;
    std::cin >> m;

    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        std::cin >> arr2[i];
    }

    int result[100];

    std::cout << "Intersection: ";
    printIntersection(n, arr1, m, arr2, result);

    std::cout << std::endl
              << "Union: ";
    printUnion(n, arr1, m, arr2, result);
}