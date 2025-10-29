#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    int result = (a > b) * a + (b > a) * b;

    std::cout << "The max number is: " << result;
}