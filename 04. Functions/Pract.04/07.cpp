#include <iostream>

char to_upper(char ch)
{
    return (ch - ('a' - 'A'));
}

char to_lower(char ch)
{
    return (ch + ('a' - 'A'));
}

int main()
{
    char ch;
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << to_lower(ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        std::cout << to_upper(ch);
    }
    else
    {
        std::cout << "the symbol has to be a letter";
    }
}