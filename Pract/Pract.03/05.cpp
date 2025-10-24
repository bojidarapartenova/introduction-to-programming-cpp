#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    int num = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << num << " ";

            num++;
        }
        std::cout << std::endl;
    }
}