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

void binarySearch(int arr[SIZE_OF_ARRAY], int n)
{
    sortArray(arr);
    std::cout << "Sorted array: ";
    printArray(arr);
    std::cout << std::endl;

    int start = 0;
    int end = SIZE_OF_ARRAY - 1;

    while (start <= end)
    {
        int mid = start + end / 2;

        if (n == arr[mid])
        {
            std::cout << "The element is at index: " << mid;
            break;
        }

        if (n > arr[mid])
        {
            start = mid + 1;
        }

        if (n < arr[mid])
        {
            end = mid - 1;
        }
    }
}

void bubbleSort(int arr[SIZE_OF_ARRAY])
{
    for (int i = 0; i < SIZE_OF_ARRAY - 1; i++)
    {
        for (int j = 0; j < SIZE_OF_ARRAY - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }

    printArray(arr);
}

void sieveOfEratosthenes(int n)
{
    bool isPrime[n + 1];

    isPrime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        isPrime[i] = true;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    int arr[SIZE_OF_ARRAY] = {3, 4, 1, 6, 2};

    // printArray(arr);
    // linearSearch(arr, 3);
    // reverseArray(arr);
    // binarySearch(arr, 3);
    // bubbleSort(arr);
    // sieveOfEratosthenes(10);
}