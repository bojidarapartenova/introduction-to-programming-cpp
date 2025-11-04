#include <iostream>

bool isPositive(int num)
{
    if (num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isNegative(int num)
{
    if (num < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    std::cin >> num;

    std::cout << isPositive(num) << std::endl;
    std::cout << isNegative(num);
}