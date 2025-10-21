#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int count = 0;

    bool isPrime = true;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }

        if (count > 2)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        std::cout << "Prime";
    }
    else
    {
        std::cout << "Not prime";
    }
}