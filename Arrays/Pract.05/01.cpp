#include <iostream>

void average(int arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double avg = sum / n;

    double minDiff;
    int closest = arr[0];

    if (arr[0] - avg < 0)
        minDiff = -(arr[0] - avg);
    else
        minDiff = arr[0] - avg;

    for (int i = 1; i < n; i++)
    {
        double diff = arr[i] - avg;
        if (diff < 0)
            diff = -diff;

        if (diff < minDiff)
        {
            minDiff = diff;
            closest = arr[i];
        }
    }

    std::cout << avg << std::endl;
    std::cout << closest << std::endl;
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
        reversed[i] = arr[n - 1 - i];
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

void longestDecreasingSubsequence(int arr[], int n)
{
    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            currentLen++;
        }
        else
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                currentLen = 1;
            }
        }
    }

    if (currentLen > maxLen)
    {
        maxLen = currentLen;
    }

    std::cout << maxLen;
}

void longestEqualSubsequence(int arr[], int n)
{
    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            currentLen++;
        }
        else
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
            }
            currentLen = 1;
        }
    }

    if (currentLen > maxLen)
    {
        maxLen = currentLen;
    }

    std::cout << maxLen;
}

void zeroNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int index = i;
        bool flag = false;

        if (num == 0 && index == 0)
        {
            flag = true;
        }
        else
        {
            int temp = num;
            while (temp != 0)
            {
                int digit = temp % 10;
                if (digit == index)
                {
                    flag = true;
                    break;
                }
                temp /= 10;
            }
        }

        if (!flag)
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void mostCommonNumber(int arr[], int n)
{
    int maxCount = 0;
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            result = arr[i];
        }
    }

    std::cout << result;
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

    // isPalindrome(arr, n);
    // longestDecreasingSubsequence(arr, n);
    // longestEqualSubsequence(arr, n);
    // zeroNumbers(arr, n);
    // mostCommonNumber(arr, n);
}