#include <iostream>

void isSqrt(int n)
{
    bool result = false;

    for (int i = 1; i <= n; i++)
    {
        if (n / i == i && n % i == 0)
        {
            std::cout << n << " - yes (" << i << "^2)";
            result = true;
            break;
        }
    }

    if (!result)
    {
        std::cout << n << " - no (?^2)";
    }
}

int main()
{
    int n;
    std::cin >> n;

    isSqrt(n);
}