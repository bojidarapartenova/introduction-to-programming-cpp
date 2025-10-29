#include <iostream>

char returnCapital(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - ('a' - 'A'));
    }
    else
    {
        return c;
    }
}

int main()
{
    char c;
    std::cin >> c;

    std::cout << returnCapital(c);
}