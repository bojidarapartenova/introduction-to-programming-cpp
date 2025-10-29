#include <iostream>

void reverseConcatenate(int n)
{
    int temp = n;
    int reverse = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    std::cout << reverse << n;
}

int main()
{
    int n;
    std::cin >> n;

    reverseConcatenate(n);
}