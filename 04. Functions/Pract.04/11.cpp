#include <iostream>

int maxNum(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

void lcm(int num1, int num2, int num3)
{
    int max = maxNum(num1, num2, num3);

    for (int i = max; i <= (num1 * num2 * num3); i++)
    {
        if (i % num1 == 0 && i % num2 == 0 && i % num3 == 0)
        {
            std::cout << i;
            break;
        }
    }
}

int main()
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    lcm(num1, num2, num3);
}