#include <iostream>

int digitsCount(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << digitsCount(n);
}