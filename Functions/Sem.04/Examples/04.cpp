#include <iostream>

bool isSuffix(int n, int k)
{
    int temp = k;
    int digits = 0;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    int divisitor = pow(10, digits);

    if (n % divisitor == k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << isSuffix(n, k);
}