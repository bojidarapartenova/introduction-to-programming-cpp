#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int sum = 0;
    while (number != 0)
    {
        sum += number;

        std::cin >> number;
    }

    std::cout << sum;
}