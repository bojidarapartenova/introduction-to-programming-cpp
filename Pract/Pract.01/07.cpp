#include <iostream>

int main()
{
    std::cout << "Apples: ";
    int apples;
    std::cin >> apples;

    std::cout << "Pears: ";
    int pears;
    std::cin >> pears;

    std::cout << "Bananas: ";
    int bananas;
    std::cin >> bananas;

    std::cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";
}