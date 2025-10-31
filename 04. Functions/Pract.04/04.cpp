#include <iostream>

int abs(int num)
{
    if (num < 0)
    {
        return num * -1;
    }
    else
    {
        return num;
    }
}

double fabs(double num)
{
    if (num < 0)
    {
        return num * -1;
    }
    else
    {
        return num;
    }
}

int main()
{
    int num;
    std::cin >> num;

    std::cout << abs(num) << std::endl;
}