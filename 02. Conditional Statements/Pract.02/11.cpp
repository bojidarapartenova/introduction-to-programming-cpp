#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int max, mid, min;

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    if (a != max && a != min)
    {
        mid = a;
    }
    else if (b != max && b != min)
    {
        mid = b;
    }
    else
    {
        mid = c;
    }

    std::cout << max << mid << min;
}