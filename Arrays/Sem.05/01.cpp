#include <iostream>

const int SIZE_OF_ARRAY = 5;

void printArray(int arr[SIZE_OF_ARRAY])
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void linearSearch(int arr[SIZE_OF_ARRAY], int n)
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        if (arr[i] == n)
        {
            std::cout << i;
            break;
        }
    }
}

void reverseArray(int arr[SIZE_OF_ARRAY])
{
    for (int i = (SIZE_OF_ARRAY - 1); i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
}

void sortArray(int arr[SIZE_OF_ARRAY])
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        for (int j = (SIZE_OF_ARRAY - 1); j >= 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int swap = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = swap;
            }
        }
    }
}

// int binarySearch(int arr[SIZE_OF_ARRAY], int n)
// {
//     sortArray(arr);
//     int mid = arr[SIZE_OF_ARRAY / 2];
// }

int main()
{
    int arr[SIZE_OF_ARRAY] = {5, 4, 3, 2, 1};

    // printArray(arr);
    // linearSearch(arr, 3);
    // reverseArray(arr);
    sortArray(arr);
    printArray(arr);
}