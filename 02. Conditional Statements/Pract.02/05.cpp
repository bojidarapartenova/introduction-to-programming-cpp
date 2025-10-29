#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    bool isTriangle = false;

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        isTriangle = true;
    }

    if (isTriangle)
    {
        std::cout << "Valid triangle";
    }
    else
    {
        std::cout << "Invalid triangle";
    }
}