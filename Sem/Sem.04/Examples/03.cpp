#include <iostream>

bool isPalindrome(int n)
{
    int temp = n;
    int reversed = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (reversed == n)
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
    int n;
    std::cin >> n;

    std::cout << isPalindrome(n);
}