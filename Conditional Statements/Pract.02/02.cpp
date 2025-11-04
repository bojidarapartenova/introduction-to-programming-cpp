#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
    {
        if (symbol == 'A' || symbol == 'a' || symbol == 'E' || symbol == 'e' || symbol == 'I' || symbol == 'i' || symbol == 'O' || symbol == 'o' || symbol == 'U' || symbol == 'u')
        {
            std::cout << "vowel";
        }
        else
        {
            std::cout << "consonant";
        }
    }
    else
    {
        std::cout << "not a letter";
    }
}