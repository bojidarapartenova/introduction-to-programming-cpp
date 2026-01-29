#include <iostream>
const int MAX_SIZE = 100;

int convert(const char *str, int k)
{
    if (k < 2 || k > 36)
    {
        return -1;
    }

    int result = 0;

    for (size_t i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        int digit;

        if (c >= '0' && c <= '9')
        {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'z')
        {
            digit = c - 'a' + 10;
        }
        else
        {
            return -1;
        }

        if (digit >= k)
        {
            return -1;
        }

        result = result * k + digit;
    }
    return result;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE, '\n');

    int k;
    std::cin >> k;

    int result = convert(str, k);
    std::cout << result;
}