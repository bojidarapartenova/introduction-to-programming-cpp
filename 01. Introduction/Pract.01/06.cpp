#include <iostream>

int main()
{
    std::cout << "dividend: ";
    int dividend;
    std::cin >> dividend;

    std::cout << "divisor: ";
    int divisor;
    std::cin >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    std::cout << "The quotient of the division is : " << quotient << std::endl;
    std::cout << "The remainder of the division is : " << remainder;
}