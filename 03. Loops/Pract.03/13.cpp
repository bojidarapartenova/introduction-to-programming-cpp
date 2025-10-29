#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a > b)
    {
        int swap = a;
        a = b;
        b = swap;
    }

    for (int i = a; i <= b; i++)
    {
        int count = 0;
        bool isPrime = true;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }

            if (count > 2 || i == 1)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << i << " ";
        }
    }
}