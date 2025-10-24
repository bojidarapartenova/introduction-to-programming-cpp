#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= (n - 1); i++)
    {
        std::cout << "x = " << i;

        int y = n - i;

        std::cout << " y = " << y << std::endl;
    }
}