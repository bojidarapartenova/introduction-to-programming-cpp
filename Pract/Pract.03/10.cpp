#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            std::cout << i << std::endl;
        }

        sum = 0;
    }
}