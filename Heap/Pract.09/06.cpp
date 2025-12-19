#include <iostream>

int *orderElements(int *arr, int n, int el)
{
    int *result = new int[n];
    int index = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < el)
        {
            result[index++] = arr[i];
        }
    }

    result[index++] = el;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > el)
        {
            result[index++] = arr[i];
        }
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;

    int *arr = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int el;
    std::cin >> el;
    int *result = orderElements(arr, n, el);
    for (size_t i = 0; i < n; i++)
    {
        std::cout << result[i] << " ";
    }
    delete[] result;
    delete[] arr;
}