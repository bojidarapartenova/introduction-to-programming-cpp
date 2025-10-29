#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int maxPower = 0;
    int val = 1;
    while (val * 2 <= n)
    {
        val *= 2;
        maxPower++;
    }

    bool first = true;
    for (int i = maxPower; i >= 0; i--)
    {
        int current = 1;
        for (int j = 0; j < i; j++)
        {
            current *= 2;
        }

        if (n >= current)
        {
            if (!first)
            {
                std::cout << " + ";
            }
            std::cout << "2^" << i;
            n -= current;
            first = false;
        }
    }
}