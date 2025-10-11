#include <iostream>

int main()
{
    std::cout << "x1 = ";
    double x1;
    std::cin >> x1;
    std::cout << "y1 = ";
    double y1;
    std::cin >> y1;

    std::cout << "x2 = ";
    double x2;
    std::cin >> x2;
    std::cout << "y2 = ";
    double y2;
    std::cin >> y2;

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    std::cout << d;
}