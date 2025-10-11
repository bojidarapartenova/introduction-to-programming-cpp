#include <iostream>

int main()
{
    std::cout << "Please enter the length of the first side:";
    double a;
    std::cin >> a;

    std::cout << "Please enter the length of the second side:";
    double b;
    std::cin >> b;

    double per = 2 * (a + b);
    double area = a * b;

    std::cout << "The perimeter is: " << per << std::endl;
    std::cout << "The area is: " << area;
}