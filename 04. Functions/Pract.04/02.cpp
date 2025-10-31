#include <iostream>

bool isEven(int n)
{
    if (n % 2 == 0)
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
    int num;
    std::cin >> num;

    std::cout << isEven(num);
}