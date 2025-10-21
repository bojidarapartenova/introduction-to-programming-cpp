#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int mostFrequent = 0;
    int maxCount = 0;

    for (int i = 0; i <= 9; i++)
    {
        int temp = number;
        int count = 0;

        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit == i)
            {
                count++;
            }

            temp /= 10;
        }

        if (count > maxCount || (count == maxCount && i < mostFrequent))
        {
            maxCount = count;
            mostFrequent = i;
        }
    }
    std::cout << mostFrequent;
}