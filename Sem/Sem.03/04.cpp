#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    int result = 0;

    for (int i = num1; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            result = i;
            break;
        }
    }
    std::cout << result;
}