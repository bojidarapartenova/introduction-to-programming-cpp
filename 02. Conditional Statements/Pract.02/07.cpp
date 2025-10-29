#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if (!((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')))
    {
        std::cout << "Invalid character";
    }
    else
    {
        if (symbol >= 'a' && symbol <= 'z')
        {
            std::cout << char(symbol - ('a' - 'A'));
        }
        else if (symbol >= 'A' && symbol <= 'Z')
        {
            std::cout << char(symbol + ('a' - 'A'));
        }
    }
}