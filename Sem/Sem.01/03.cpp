#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;

    bool isVowel = (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U');

    std::cout << isVowel;
}