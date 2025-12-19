#include <iostream>
const int MAX_SIZE = 1024;

int strLen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

char *censorStr(const char *str)
{
    int len = strLen(str) + 1;

    char *result = new char[len];
    for (size_t i = 0; i < len; i++)
    {
        if (isDigit(str[i]))
        {
            result[i] = '*';
        }
        else
        {
            result[i] = str[i];
        }
    }
    result[len] = '\0';
    return result;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    char *result = censorStr(str);
    std::cout << result;
    delete[] result;
}