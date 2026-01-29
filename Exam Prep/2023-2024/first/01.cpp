#include <iostream>
const int MAX_SIZE = 100;

int analyzeArray(const char *str)
{
    int mask = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int digit = str[i] - '0';
            mask |= (1 << digit);
        }
    }

    for (int i = 9; i >= 0; i--)
    {
        if ((mask & (1 << i)) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    int result = analyzeArray(str);
    std::cout << result;
}