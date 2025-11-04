#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "false";
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    if (n == 1)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
}