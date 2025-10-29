#include <iostream>

int log(int n, int k)
{
    int count = 0;

    while (n >= k)
    {
        n /= k;
        count++;
    }
    return count;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << log(n, k);
}