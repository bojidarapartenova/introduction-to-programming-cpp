#include <iostream>

int main()
{
    std::cout << "Result: ";

    int result;
    std::cin >> result;

    std::cout << "Grade: ";

    if (result >= 90)
    {
        std::cout << "6+";
    }
    else if (result >= 80)
    {
        std::cout << "6";
    }
    else if (result >= 70)
    {
        std::cout << "5";
    }
    else if (result >= 60)
    {
        std::cout << "4";
    }
    else if (result >= 40)
    {
        std::cout << "3";
    }
    else
    {
        std::cout << "2";
    }
}