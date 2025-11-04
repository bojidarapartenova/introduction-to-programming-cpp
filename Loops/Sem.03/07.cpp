#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = number; i >= 2; i--)
    {
        int temp = number;
        int power = 0;

        while (temp % i == 0)
        {
            power++;
            temp /= i;
        }

        if (power > 0)
        {
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                std::cout << i << "^" << power << " ";

                for (int k = 0; k < power; k++)
                {
                    number /= i;
                }
            }
        }
    }
}