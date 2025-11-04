#include <iostream>

int main()
{
    std::cout << "a = ";
    int a;
    std::cin >> a;

    std::cout << "b = ";
    int b;
    std::cin >> b;

    std::cout << "c = ";
    int c;
    std::cin >> c;

    int x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    int x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2;
}