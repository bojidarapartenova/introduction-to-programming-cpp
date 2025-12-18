#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n <= 0)
        return 0;

    int *dynamicArray = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> dynamicArray[i];
    }

    delete[] dynamicArray;
}