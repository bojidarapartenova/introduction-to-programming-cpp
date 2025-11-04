#include <iostream>

int main()
{
    int r;
    std::cin >> r;

    double per = 2 * M_PI * r;
    double area = M_PI * r * r;

    std::cout << "The perimeter is: " << per << std::endl;
    std::cout << "The area is: " << area;
}