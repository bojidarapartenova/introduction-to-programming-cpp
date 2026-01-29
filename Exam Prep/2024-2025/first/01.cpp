#include <iostream>
const int MAX_SIZE = 10;

int compareNums(int num1, int num2)
{
    if (num1 > num2)
    {
        return 1;
    }
    else if (num1 < num2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

bool checkNum(long num)
{
    bool isIncreasing = true;
    bool isDecreasing = true;

    int digits[MAX_SIZE];
    int index = 0;

    int temp = num;
    int len = 0;
    while (temp > 0)
    {
        digits[index++] = temp % 10;
        temp /= 10;
        len++;
    }

    if (len < 2)
    {
        return false;
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len - 1; j++)
        {
            if (i == j)
            {
                continue;
            }

            int res = compareNums(digits[j], digits[j + 1]);

            if (res != 1)
            {
                isDecreasing = false;
            }
            else if (res != 2)
            {
                isIncreasing = false;
            }
        }
    }

    if (!isDecreasing && !isIncreasing)
    {
        return false;
    }
    return true;
}

int main()
{
    long num;
    std::cin >> num;

    if (checkNum(num))
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}