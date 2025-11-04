#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    for (int x = -100; x <= 100; x++)
    {
        int f = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e;

        if (f >= 0)
        {
            std::cout << x << " ";
        }
    }
}