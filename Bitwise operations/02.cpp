#include <iostream>
const int MAX = 100;

int findOnlyNum(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    return xorSum;
}

int main()
{
    int arr[MAX];
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << findOnlyNum(arr, n);
}