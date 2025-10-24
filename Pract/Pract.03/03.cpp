#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int square = n * n;

    while (square != 0)
    {
        int digit = square % 10;

        if (digit != 0)
        {
            std::cout << digit;
        }

        square /= 10;
    }
}