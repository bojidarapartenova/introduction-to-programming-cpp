#include <iostream>

int reverseNumber(int number)
{
    int reverse = 0;
    while (number != 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return reverse;
}

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

bool isPrefix(int n, int k)
{
    n = reverseNumber(n);
    k = reverseNumber(k);

    if (isSuffix(n, k))
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

    std::cout << isPrefix(n, k);
}