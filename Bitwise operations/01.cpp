#include <iostream>

bool isEven(int number)
{
    // 3
    // 0000000011 - 3
    // 0000000001 - 1
    return ~(number & 1);
}

int twoPowerK(int k)
{
    // 000000001 - 1 k=0
    // 000001000 - 8 k=3
    return 1 << k;
}

int main()
{
    int number;
    std::cin >> number;

    std::cout << isEven(number);
}