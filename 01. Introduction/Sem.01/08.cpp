#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    int biggerNumber = (a > b) * a + (a < b) * b;

    std::cout << biggerNumber;
}