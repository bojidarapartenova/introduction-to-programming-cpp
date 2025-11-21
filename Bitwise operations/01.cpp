#include <iostream>

bool isEven(int number)
{
    return !(number & 1);
}

int twoPowerK(int k)
{
    return 1 << k;
}

int deleteBit(int number, int bitPos)
{
    return number & ~(1 << bitPos);
}

int setBit(int number, int bitPos)
{
    return number | (1 << bitPos);
}

int getBit(int number, int bitPos)
{
    return 1 & (number >> bitPos);
}

int main()
{
    int number;
    std::cin >> number;

    // std::cout << isEven(number);
    // std::cout << twoPowerK(number);

    int bitPos;
    std::cin >> bitPos;
    // std::cout << deleteBit(number, bitPos);
    // std::cout << setBit(number, bitPos);
    std::cout << getBit(number, bitPos);
}