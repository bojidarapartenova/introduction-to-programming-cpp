#include <iostream>

int numberLength(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

int main()
{
    int num;
    std::cin >> num;

    std::cout << numberLength(num);
}