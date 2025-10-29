#include <iostream>

bool isInfix(int n, int k)
{
    int temp = k;
    int digits = 0;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    int divisitor = pow(10, digits);

    while (n >= k)
    {
        if (n % divisitor == k)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << isInfix(n, k);
}