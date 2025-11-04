#include <iostream>

int main()
{
    double a = 5.4;
    double b = 7.9;

    double per = 2 * (a + b);
    double area = a * b;

    std::cout << "The perimeter is: " << per << std::endl;
    std::cout << "The area is: " << area;
}