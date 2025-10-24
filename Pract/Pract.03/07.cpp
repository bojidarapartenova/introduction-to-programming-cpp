#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int sum = 0;
    int secondSum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    for (int i = 1; i <= (n - 1); i++)
    {
        int number;
        std::cin >> number;

        if (number > n)
        {
            std::cout << "Invalid number";
            break;
        }

        secondSum += number;
    }

    std::cout << (sum - secondSum);
}