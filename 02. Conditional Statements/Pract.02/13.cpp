#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    if (number < 1000 || number > 9999)
    {
        std::cout << "Invalid number";
    }
    else
    {
        int forthDigit = number % 10;
        number /= 10;

        int thirdDigit = number % 10;
        number /= 10;

        int secondDigit = number % 10;
        number /= 10;

        int firstDigit = number;

        int firstNumber = firstDigit * 10 + forthDigit;
        int secondNumber = secondDigit * 10 + thirdDigit;

        if (firstNumber > secondNumber)
        {
            std::cout << "greater (" << firstNumber << " > " << secondNumber << ")";
        }
        else if (firstNumber == secondNumber)
        {
            std::cout << "equal (" << firstNumber << " = " << secondNumber << ")";
        }
        else
        {
            std::cout << "less (" << firstNumber << " < " << secondNumber << ")";
        }
    }
}