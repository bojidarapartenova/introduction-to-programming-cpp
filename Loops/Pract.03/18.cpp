#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n + 2; i++)
    {
        std::cout << "#";
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << "#";
        for (int j = 0; j < n; j++)
        {
            std::cout << ((i + j) % n) + 1;
        }
        std::cout << "#" << std::endl;
    }

    std::cout << "#";

    int xCount = (n % 2 == 0) ? 2 : 1;
    int spaceCount = (n - xCount) / 2;

    for (int j = 0; j < spaceCount; j++)
    {
        std::cout << " ";
    }

    for (int j = 0; j < xCount; j++)
    {
        std::cout << "X";
    }

    for (int j = 0; j < spaceCount; j++)
    {
        std::cout << " ";
    }

    std::cout << "#" << std::endl;

    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << "#";
        for (int j = 0; j < n; j++)
        {
            std::cout << ((i + j) % n) + 1;
        }
        std::cout << "#" << std::endl;
    }

    for (int i = 0; i < n + 2; i++)
    {
        std::cout << "#";
    }
}