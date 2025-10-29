#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a = 1;
    int b = 1;
    std::cout << a << " " << b;

    int c = a + b;

    while (c < n)
    {
        std::cout << " " << c;
        a = b;
        b = c;
        c = a + b;
    }
}