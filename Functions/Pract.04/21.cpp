#include <iostream>

int countDigit(int n, int digit)
{
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == digit)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

void sortDigits(int n)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < countDigit(n, i); j++)
        {
            std::cout << i;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    sortDigits(n);
}