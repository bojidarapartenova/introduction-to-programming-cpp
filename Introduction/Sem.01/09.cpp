#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "a: " << a << " b: " << b;
}