#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int digits = 0;
    int temp = n;
    int reversed = 0;

    while (temp != 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
        digits++;
    }

    int mid1, mid2;

    if (digits % 2 != 0)
    {
        mid1 = mid2 = digits / 2 + 1;
    }
    else
    {
        mid1 = digits / 2;
        mid2 = digits / 2 + 1;
    }

    int result = 0;
    temp = reversed;
    for (int i = 1; i <= digits; i++)
    {
        int digit = temp % 10;
        temp /= 10;

        if (i != mid1 && i != mid2)
        {
            result = result * 10 + digit;
        }
    }

    std::cout << result << ", " << result + 1;
}