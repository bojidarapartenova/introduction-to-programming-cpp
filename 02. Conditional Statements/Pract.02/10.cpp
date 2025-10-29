#include <iostream>

int main()
{
    double a;
    std::cin >> a;

    char operation;
    std::cin >> operation;

    double b;
    std::cin >> b;

    switch (operation)
    {
    case '+':
    {
        std::cout << (a + b);
    }
    break;

    case '-':
    {
        std::cout << (a - b);
    }
    break;

    case '*':
    {
        std::cout << (a * b);
    }
    break;

    case '/':
    {
        if (b == 0)
        {
            std::cout << "you can't divide by zero";
        }
        else
        {
            std::cout << (a / b);
        }
    }
    break;
    default:
    {
        std::cout << "Invalid operation";
    }
    }
}