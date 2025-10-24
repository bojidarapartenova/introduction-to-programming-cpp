#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}