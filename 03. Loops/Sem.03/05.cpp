#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    int result = 0;

    for (int i = 1; i <= num1 * num2; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            result = i;
            break;
        }
    }
    std::cout << result;
}