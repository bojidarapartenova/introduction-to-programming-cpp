#include <iostream>

int main()
{
    /*with another variable: */
    std::cout << "a = ";
    int a;
    std::cin >> a;

    std::cout << "b = ";
    int b;
    std::cin >> b;

    int swap = a;
    a = b;
    b = swap;

    std::cout << "a = " << a << ", b= " << b << std::endl;

    /*without another variable: */
    std::cout << "c = ";
    int c;
    std::cin >> c;

    std::cout << "d = ";
    int d;
    std::cin >> d;

    c = c + d;
    d = c - d;
    c = c - d;

    std::cout << "c = " << c << ", d= " << d << std::endl;
}