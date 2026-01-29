#include <iostream>

char *findDiff(const long arr[], size_t n)
{
    char *result = new char[n];
    int index = 0;

    long minDiff = labs(arr[0] - arr[1]);
    long currDiff = 0;
    long num1 = arr[0];
    long num2 = arr[1];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            currDiff = labs(arr[i] - arr[j]);

            if (currDiff < minDiff)
            {
                minDiff = currDiff;
                (arr[i] > arr[j]) ? (num1 = arr[i]) : (num2 = arr[i]);
                (arr[i] > arr[j]) ? (num2 = arr[j]) : (num1 = arr[j]);
            }
        }
    }

    int num1Digits[10];
    int n1 = 0;
    while (num1 > 0)
    {
        num1Digits[n1++] = num1 % 10;
        num1 /= 10;
    }

    int num2Digits[10];
    int n2 = 0;
    while (num2 > 0)
    {
        num2Digits[n2++] = num2 % 10;
        num2 /= 10;
    }

    for (int i = n1 - 1; i >= 0; i--)
    {
        result[index++] = num1Digits[i] + '0';
    }
    result[index++] = ',';

    for (int i = n2 - 1; i >= 0; i--)
    {
        result[index++] = num2Digits[i] + '0';
    }
    result[index] = '\0';

    return result;
}

int main()
{
    int n;
    std::cin >> n;

    long *arr = new long[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    char *result = findDiff(arr, n);
    std::cout << result;

    delete[] arr;
    delete[] result;
}