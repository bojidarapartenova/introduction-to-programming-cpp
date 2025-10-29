#include <iostream>

bool isCapitalLetter(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

int main()
{
    char c;
    std::cin >> c;

    std::cout << isCapitalLetter(c);
}