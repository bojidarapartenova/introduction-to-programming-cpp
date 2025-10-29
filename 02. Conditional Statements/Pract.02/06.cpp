#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    if (d < 0)
    {
        std::cout << "no real roots";
    }
    else if (d == 0)
    {
        double x = -b / (2 * a);

        std::cout << "x= " << x;
    }
    else
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        std::cout << "x1= " << x1 << std::endl;
        std::cout << "x2= " << x2 << std::endl;
    }
}