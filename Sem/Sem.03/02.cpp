#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    while (number != 0)
    {
        int digit = number % 10;
        number /= 10;

        if (number == 0)
        {
            digit++;
        }

        std::cout << digit;
    }
}