#include <iostream>

int main()
{
    std::cout << "Arabic numeral: ";
    int arabic;
    std::cin >> arabic;

    std::cout << "Roman numeral: ";

    if (arabic < 1 || arabic > 9)
    {
        std::cout << "The number should be between 1 and 9";
    }
    else if (arabic == 1)
    {
        std::cout << "I";
    }
    else if (arabic == 2)
    {
        std::cout << "II";
    }
    else if (arabic == 3)
    {
        std::cout << "III";
    }
    else if (arabic == 4)
    {
        std::cout << "IV";
    }
    else if (arabic == 5)
    {
        std::cout << "V";
    }
    else if (arabic == 6)
    {
        std::cout << "VI";
    }
    else if (arabic == 7)
    {
        std::cout << "VII";
    }
    else if (arabic == 8)
    {
        std::cout << "VIII";
    }
    else if (arabic == 9)
    {
        std::cout << "IX";
    }
}