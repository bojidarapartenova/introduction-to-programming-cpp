#include <iostream>

void isDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        std::cout << c;
    }
    else
    {
        std::cout << -1;
    }
}

int main()
{
    char c;
    std::cin >> c;

    isDigit(c);
}