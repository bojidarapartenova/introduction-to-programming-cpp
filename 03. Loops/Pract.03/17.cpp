#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }

        if (i == n)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << "- ";
            }
        }
        else
        {
            int spaces = (n - i) * 2 + n;
            for (int j = 0; j < spaces; j++)
            {
                std::cout << "  ";
            }
        }

        for (int j = i; j >= 1; j--)
        {
            std::cout << j;
            if (j > 1)
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }

        int spaces = (n - i) * 2 + n;
        for (int j = 0; j < spaces; j++)
        {
            std::cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            std::cout << j;
            if (j > 1)
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}