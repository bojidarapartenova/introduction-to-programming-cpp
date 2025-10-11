#include <iostream>

int main()
{
    int firstNum;
    std::cin >> firstNum;
    int secondNum;
    std::cin >> secondNum;

    bool isFirstSmaller = firstNum < secondNum;

    std::cout << isFirstSmaller;
}