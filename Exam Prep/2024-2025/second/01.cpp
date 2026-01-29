#include <iostream>
const int MAX_SIZE = 100;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

long processNum(long num)
{
    int digits[MAX_SIZE];
    int len = 0;

    long temp = num;
    while (temp > 0)
    {
        digits[len++] = temp % 10;
        temp /= 10;
    }

    for (size_t i = 0; i < len / 2; i++)
    {
        swap(digits[i], digits[len - 1 - i]);
    }

    int currCount = 1;
    int currStart = 0;
    int maxCount = 1;
    int maxStart = 0;

    for (size_t i = 0; i < len - 1; i++)
    {
        if (digits[i] <= digits[i + 1])
        {
            currStart = i + 1;
            currCount = 1;
        }
        else
        {
            currCount++;
        }

        if (currCount > maxCount)
        {
            maxCount = currCount;
            maxStart = currStart;
        }
    }

    long result = 0;
    for (size_t i = maxStart; i < maxCount + maxStart; i++)
    {
        result = result * 10 + digits[i];
    }

    return result;
}

int main()
{
    long num;
    std::cin >> num;

    long result = processNum(num);
    std::cout << result;
}