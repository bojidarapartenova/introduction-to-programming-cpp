#include <iostream>

bool isAscending(int n)
{
    int prevDigit = n % 10;
    n /= 10;

    while (n != 0)
    {
        int currentDigit = n % 10;

        if (currentDigit > prevDigit)
        {
            return false;
        }

        prevDigit = currentDigit;
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << isAscending(n);
}