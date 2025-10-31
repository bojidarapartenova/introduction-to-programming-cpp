#include <iostream>

bool checkSymbol(char s)
{
    if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isCapitalLetter(char s)
{
    if (checkSymbol(s))
    {
        if (s >= 'A' && s <= 'Z')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    char s;
    std::cin >> s;

    std::cout << isCapitalLetter(s);
}