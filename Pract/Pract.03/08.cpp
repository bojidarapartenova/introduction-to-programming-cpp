#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if ((i * i + j * j) == k * k)
                {
                    std::cout << i << " " << j << " " << k << std::endl;
                }
            }
        }
    }
}