#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int guess;
    std::cin >> guess;

    while (number != guess)
    {
        if (guess < number)
        {
            std::cout << "Less than the number" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Greater than the number" << std::endl;
        }

        std::cin >> guess;
    }
}