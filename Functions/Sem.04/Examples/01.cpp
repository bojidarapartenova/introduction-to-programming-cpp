#include <iostream>

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimePairs(int n)
{
    for (int k = 1; k <= n; k++)
    {
        int a = 6 * k - 1;
        int b = 6 * k + 1;

        if (isPrime(a) && isPrime(b))
        {
            std::cout << a << ", " << b << std::endl;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    printPrimePairs(n);
}