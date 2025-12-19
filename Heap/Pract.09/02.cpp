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

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

int upperCount(const char *str)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (isUpper(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

int lowerCount(const char *str)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (isLower(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

struct TwoStrings
{
    char *upperArr;
    char *lowerArr;
};

TwoStrings upperAndLower(const char *str)
{
    int len = strLen(str) + 1;
    int upperLen = upperCount(str) + 1;
    int lowerLen = lowerCount(str) + 1;

    TwoStrings result;
    result.upperArr = new char[upperLen];
    result.lowerArr = new char[lowerLen];

    int upperIndex = 0;
    int lowerIndex = 0;

    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (isUpper(str[i]))
        {
            result.upperArr[upperIndex++] = str[i];
        }
        else if (isLower(str[i]))
        {
            result.lowerArr[lowerIndex++] = str[i];
        }
    }
    result.upperArr[upperIndex] = '\0';
    result.lowerArr[lowerIndex] = '\0';

    return result;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    TwoStrings result = upperAndLower(str);
    std::cout << result.upperArr << '\n'
              << result.lowerArr;

    delete[] result.upperArr;
    delete[] result.lowerArr;
}