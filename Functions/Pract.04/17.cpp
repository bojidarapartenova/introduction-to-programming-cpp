#include <iostream>

bool isInInterval(int n, int from, int to)
{
    return (n >= from && n <= to);
}

int getClosestPowerOf2(int num)
{
    int powerOf2 = 0;
    int temp = 1;
    while (temp <= num)
    {
        temp *= 2;
        powerOf2++;
    }

    int prevPower = temp / 2;
    if (temp - num < num - prevPower)
    {
        return powerOf2;
    }
    else
    {
        return powerOf2 - 1;
    }
}

int main()
{
    int num;
    std::cin >> num;

    const int LOWER = 100;
    const int UPPER = 100000;

    while (!isInInterval(num, LOWER, UPPER))
    {
        std::cout << "Please enter a valid number";
        std::cin >> num;
    }

    std::cout << getClosestPowerOf2(num);
}