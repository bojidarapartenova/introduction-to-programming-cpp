#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    char s;
    std::cin >> s;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << s;
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            std::cout << " ";
        }

        for (int j = 2 * i - 1; j >= 1; j--)
        {
            std::cout << s;
        }
        std::cout << std::endl;
    }
}