#include <iostream>

void reversedNumber(int n)
{
    while (n != 0)
    {
        std::cout << n % 10;
        n /= 10;
    }
}

int main()
{
    int n;
    std::cin >> n;

    reversedNumber(n);
}