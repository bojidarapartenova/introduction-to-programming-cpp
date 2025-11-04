#include <iostream>

int pow(int num, unsigned n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= num;
    }
    return result;
}

int main()
{
    int num;
    unsigned n;
    std::cin >> num >> n;

    std::cout << pow(num, n);
}