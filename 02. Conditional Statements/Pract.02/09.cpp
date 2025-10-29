#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int swap;

    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }

    if (b > c)
    {
        swap = b;
        b = c;
        c = swap;
    }

    if (a > c)
    {
        swap = a;
        a = c;
        c = swap;
    }

    std::cout << a << " " << b << " " << c;
}