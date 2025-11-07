#include <iostream>

void average(int arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    std::cout << (sum / n);
}

void minAndMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max;
}

void removeAtIndex(int arr[], int n, int index)
{
    for (int i = 0; i < index; i++)
    {
        std::cout << arr[i] << " ";
    }

    for (int i = (index + 1); i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void resultArray(int n, int arr[], int result[], int a, int b)
{
    std::cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= a && arr[i] <= b)
        {
            result[i] = arr[i];

            std::cout << result[i] << " ";
        }
    }

    std::cout << ']';
}

void isPalindrome(int arr[], int n)
{
    bool result = true;

    int reversed[n];

    for (int i = (n - 1); i >= 0; i--)
    {
        int j = 0;
        reversed[i] = arr[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << reversed[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != reversed[i])
        {
            result = false;
            break;
        }
    }

    if (result)
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}

int main()
{
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;

        arr[i] = number;
    }

    // average(arr, n);
    // minAndMax(arr, n);

    // int index;
    // std::cin >> index;
    // removeAtIndex(arr, n, index);

    // int result[] = {};
    // int a, b;
    // std::cin >> a >> b;
    // resultArray(n, arr, result, a, b);

    isPalindrome(arr, n);
}