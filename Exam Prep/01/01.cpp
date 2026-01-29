#include <iostream>

int findMaxMin(const int *arr, size_t size, int &minVal, int &maxVal)
{
    minVal = arr[0];
    maxVal = arr[0];

    double sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];

        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }

        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    double average = sum / size;
    int minDiff = abs(average - arr[0]);
    int currDiff = 0;
    int el = arr[0];

    for (size_t i = 0; i < size; i++)
    {
        currDiff = abs(average - arr[i]);
        if (currDiff < minDiff)
        {
            minDiff = currDiff;
            el = arr[i];
        }
    }
    return el;
}

int main()
{
    int size;
    std::cin >> size;

    int *arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    int minVal = 0;
    int maxVal = 0;

    int result = findMaxMin(arr, size, minVal, maxVal);
    std::cout << "min val: " << minVal << std::endl;
    std::cout << "max val: " << maxVal << std::endl;
    std::cout << "closest to average: " << result << std::endl;

    delete[] arr;
}