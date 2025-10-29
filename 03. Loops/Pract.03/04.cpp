#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int factorial = 1;

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }

    std::cout << "Factorial: " << factorial;
}