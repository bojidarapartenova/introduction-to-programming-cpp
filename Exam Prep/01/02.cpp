#include <iostream>
const int MAX_SIZE = 100;

int strLen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool isPalindrome(const char *str)
{
    int len = strLen(str);
    for (size_t i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}

bool checkStr(const char *str)
{
    int len = strLen(str);

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            char result[len + 1];
            int index = 0;
            for (size_t k = 0; k < len; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                result[index++] = str[k];
            }
            result[index] = '\0';

            if (isPalindrome(result))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    if (checkStr(str))
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}