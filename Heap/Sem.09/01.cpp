#include <iostream>
const int MAX_SIZE = 100;

int *inputArray()
{
    int countOfElements;
    std::cin >> countOfElements;

    int *dynamicArray = new int[countOfElements];

    for (size_t i = 0; i < countOfElements; i++)
    {
        std::cin >> dynamicArray[i];
    }

    return dynamicArray;
}

void deleteArrayMemory(int *arrPtr)
{
    delete[] arrPtr;
}

int main()
{
    int n;
    std::cin >> n;

    int *dynamicArray = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> dynamicArray[i];
    }

    delete[] dynamicArray;
}