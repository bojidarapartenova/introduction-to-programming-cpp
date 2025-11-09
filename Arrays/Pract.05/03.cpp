#include <iostream>

void printArray(int arr[], int size)
{
    std::cout << "[";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i != size - 1)
            std::cout << " ";
    }
    std::cout << "]" << std::endl;
}

void printIntersection(int n, int arr1[], int m, int arr2[], int &resSize, int result[])
{
    resSize = 0;
    for (int i = 0; i < n; i++)
    {
        bool foundInArr2 = false;
        bool alreadyInResult = false;

        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                foundInArr2 = true;
                break;
            }
        }

        for (int k = 0; k < resSize; k++)
        {
            if (arr1[i] == result[k])
            {
                alreadyInResult = true;
                break;
            }
        }

        if (foundInArr2 && !alreadyInResult)
        {
            result[resSize++] = arr1[i];
        }
    }
}

void printUnion(int n, int arr1[], int m, int arr2[], int &resSize, int result[])
{
    resSize = 0;

    for (int i = 0; i < n; i++)
    {
        bool alreadyInResult = false;
        for (int k = 0; k < resSize; k++)
        {
            if (arr1[i] == result[k])
            {
                alreadyInResult = true;
                break;
            }
        }
        if (!alreadyInResult)
        {
            result[resSize++] = arr1[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        bool alreadyInResult = false;
        for (int k = 0; k < resSize; k++)
        {
            if (arr2[i] == result[k])
            {
                alreadyInResult = true;
                break;
            }
        }
        if (!alreadyInResult)
        {
            result[resSize++] = arr2[i];
        }
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    int arr1[n];
    int arr2[m];

    int result[100];
    int resSize;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> arr2[i];
    }

    printIntersection(n, arr1, m, arr2, resSize, result);
    std::cout << "Intersection: ";
    printArray(result, resSize);

    printUnion(n, arr1, m, arr2, resSize, result);
    std::cout << "Union: ";
    printArray(result, resSize);
}