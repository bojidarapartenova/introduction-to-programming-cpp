#include <iostream>

int concat(int first, int second)
{
    int multiplier = 1;
    int temp = second;

    if (temp == 0)
    {
        multiplier = 10;
    }
    else
    {
        while (temp != 0)
        {
            multiplier *= 10;
            temp /= 10;
        }
    }

    return first * multiplier + second;
}

int main()
{
    int first, second;
    std::cin >> first >> second;

    std::cout << concat(first, second);
}