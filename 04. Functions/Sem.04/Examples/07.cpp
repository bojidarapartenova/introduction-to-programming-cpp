#include <iostream>

int power(int n, int k)
{
    int result = 1;
    for (int i = 1; i <= k; i++)
    {
        result *= n;
    }

    return result;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << power(n, k);
}