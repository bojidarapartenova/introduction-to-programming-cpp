#include <iostream>

int sumDigits(long n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    return sum;
}

int main()
{
    long n;
    std::cin >> n;

    while (n > 9)
    {
        int currentSum = sumDigits(n);
        std::cout << "сумата на " << n << " е " << currentSum << std::endl;

        n = currentSum;
    }
}