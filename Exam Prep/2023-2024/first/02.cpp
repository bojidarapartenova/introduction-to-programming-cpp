#include <iostream>

int findIndex(const int arr[], size_t l)
{
    for (int i = l - 1; i >= 0; i--)
    {
        int count = 0;
        for (int j = 0; j < l; j++)
        {
            if (arr[j] > i)
            {
                count++;
            }
        }
        if (count == i)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int l;
    std::cin >> l;

    int *arr = new int[l];
    for (size_t i = 0; i < l; i++)
    {
        std::cin >> arr[i];
    }

    int result = findIndex(arr, l);
    std::cout << result;

    delete[] arr;
}