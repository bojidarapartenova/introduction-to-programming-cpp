#include <iostream>

int *mergeArrays(int arr1[], int arr2[], int m)
{
    int *result = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        result[i] = arr1[i] + arr2[m - 1 - i];
    }
    return result;
}

int main()
{
    int m;
    std::cin >> m;

    int *arr1 = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        std::cin >> arr1[i];
    }

    int *arr2 = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        std::cin >> arr2[i];
    }

    int *result = mergeArrays(arr1, arr2, m);
    for (size_t i = 0; i < m; i++)
    {
        std::cout << result[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] result;
}