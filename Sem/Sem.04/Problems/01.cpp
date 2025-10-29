#include <iostream>

int mod(int n)
{
    if (n < 0)
    {
        return -1 * n;
    }
    return n;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << mod(n);
}