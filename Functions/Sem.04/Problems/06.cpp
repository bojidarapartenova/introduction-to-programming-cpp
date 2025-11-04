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

int countDistinctPrimeDivisors(int a, int b, int k)
{
    int result = 0;

    for (int i = a; i <= b; i++)
    {
        int count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && isPrime(j))
            {
                count++;
            }
        }
        if (count == k)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int a, b, k;
    std::cin >> a >> b >> k;

    std::cout << countDistinctPrimeDivisors(a, b, k);
}