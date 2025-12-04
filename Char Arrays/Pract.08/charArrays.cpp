#include <iostream>
const int MAX_SIZE = 1024;

int strlen(char arr[])
{
    int length = 0;

    int el = 0;
    while (arr[el++] != '\0')
    {
        length++;
    }
    return length;
}

void printLowerLetters(char text[])
{
    char result[MAX_SIZE];
    int index = 0;

    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            result[index++] = text[i];
        }
        i++;
    }

    std::cout << result;
}

void printSubstring(char text[], int beg, int end)
{
    int textLen = strlen(text);
    char subStr[textLen];
    int index = 0;

    if (end > textLen)
    {
        end = textLen;
    }

    if (beg >= textLen)
    {
        std::cout << " ";
        return;
    }

    for (size_t i = beg; i <= end; i++)
    {
        subStr[index++] = text[i];
    }
    subStr[index] = '\0';
    std::cout << subStr;
}

void replaceEvenAndOdd(char text[], char x, char a, char b)
{
    int size = strlen(text);
    char result[size];
    int count = 0;

    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == x)
        {
            if (count % 2 == 0)
            {
                text[i] = a;
            }
            else
            {
                text[i] = b;
            }
            count++;
        }
        i++;
    }
}

int countOfChars(char text[], char c)
{
    int count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char text[MAX_SIZE];
    std::cin.getline(text, MAX_SIZE, '\n');

    // 1
    // printLowerLetters(text);

    // 2
    // int beg, end;
    // std::cin >> beg >> end;
    // printSubstring(text, beg, end);

    // 3
    // char x, a, b;
    // std::cin >> x >> a >> b;
    // replaceEvenAndOdd(text, x, a, b);
    // std::cout << text;

    // 4
    // char c;
    // std::cin >> c;
    // std::cout << countOfChars(text, c);
}