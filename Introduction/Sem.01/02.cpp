#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;

    int reversed = units * 100 + tens * 10 + hundreds;

    std::cout << reversed + 1;
}