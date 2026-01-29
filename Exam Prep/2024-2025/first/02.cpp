#include <iostream>
const int MAX_SIZE = 4;

int strLen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int findNumber(const char *str)
{
    int len = strLen(str);

    if (len != 3)
    {
        return -1;
    }

    int res = 0;
    int first = str[0] - '0';
    int second = str[1] - '0';
    int third = str[2] - '0';

    if (first == second || first == third || second == third)
    {
        if (first == second)
        {
            res = first * 100 + third * 10 + second;
        }
        else if (first == third)
        {
            res = first * 100 + second * 10 + third;
        }
        else if (second == third)
        {
            res = second * 100 + first * 10 + third;
        }
    }
    return res;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    std::cout << findNumber(str);
}