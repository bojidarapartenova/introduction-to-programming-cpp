#include <iostream>

int numberLength(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

int kDigit(int n, int k)
{
    int kDigit;
    int count = numberLength(n);
    while (count != k - 1)
    {
        count--;
        kDigit = n % 10;
        n /= 10;
    }

    return kDigit;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << kDigit(n, k);
}