#include <iostream>

bool isOnSameCircle(int a, int b, int c, int d)
{
    int r1 = a * a + b * b;
    int r2 = c * c + d * d;

    if (r1 == r2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << isOnSameCircle(a, b, c, d);
}