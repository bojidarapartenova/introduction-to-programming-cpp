#include <iostream>

int main()
{
    long cardNumber;
    std::cin >> cardNumber;

    std::cout << "XXXXXXXXXXXX" << cardNumber % 10000;
}