#include <iostream>

int *concatArrays(int *arr1, int n, int *arr2, int m)
{
    int resultLen = n + m;
    int *result = new int[resultLen];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        result[k++] = arr1[i++];
    }

    while (j < m)
    {
        result[k++] = arr2[j++];
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;
    int *arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr1[i];
    }

    int m;
    std::cin >> m;
    int *arr2 = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        std::cin >> arr2[i];
    }

    int *result = concatArrays(arr1, n, arr2, m);
    for (size_t i = 0; i < n + m; i++)
    {
        std::cout << result[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] result;
}