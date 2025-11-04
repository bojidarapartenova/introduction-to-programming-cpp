#include <iostream>

int maxNum(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

void gcd(int a, int b, int c, int d)
{
    int max = maxNum(a, b, c, d);
    for (int i = max; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0)
        {
            std::cout << i;
            break;
        }
    }
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    gcd(a, b, c, d);
}