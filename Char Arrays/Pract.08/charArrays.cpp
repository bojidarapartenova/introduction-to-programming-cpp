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

void longestPrefix(char str1[], char str2[], char str3[])
{
    int index = 0;
    char longest[MAX_SIZE];

    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0' || str3[i] != '\0')
    {
        if (str1[i] == str2[i] && str1[i] == str3[i])
        {
            longest[index++] = str1[i];
        }
        else
        {
            longest[index] = '\0';
            break;
        }
        i++;
    }
    std::cout << longest;
}

int strCompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        if (str1[i] < str2[i])
        {
            return -1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] != '\0')
        return -1;
    if (str1[i] != '\0' && str2[i] == '\0')
        return 1;

    return 0;
}

void removeDuplicates(char text[])
{
    bool seen[26] = {false};
    int write = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        int index = text[i] - 'a';
        std::cout << index << " ";
        if (!seen[index])
        {
            seen[index] = true;
            text[write++] = text[i];
        }
    }
    text[write] = '\0';
}

bool isLetter(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

int returnIndexOfWord(char text[], char word[])
{
    int wordLen = strlen(word);

    char current[MAX_SIZE];
    int index = 0;
    for (size_t i = 0; text[i] != '\0'; i++)
    {
        while (isLetter(text[i]))
        {
            current[index++] = text[i];
            i++;
        }
        current[index] = '\0';
        index = 0;
        if (strlen(current) == wordLen)
        {
            int j = 0;
            while (current[j] != '\0')
            {
                if (current[j] != word[j])
                {
                    break;
                }
                j++;
            }
            if (j == wordLen)
            {
                return i - wordLen;
            }
        }
    }
    return -1;
}

int countOfStr(char text[], char str[])
{
    int count = 0;
    int strLen = strlen(str);

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        bool isFound = true;
        for (size_t j = 0; j < strLen; j++)
        {
            if (text[i + j] == '\0' || text[i + j] != str[j])
            {
                isFound = false;
                break;
            }
        }
        if (isFound)
        {
            count++;
        }
    }
    return count;
}

void toLower(char text[])
{
    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + ('a' - 'A');
        }
    }
}

void replaceSubstr(char text[], char substring[])
{
    toLower(text);

    int substrLen = strlen(substring);
    int textLen = strlen(text);

    for (size_t i = 0; i < textLen - substrLen; i++)
    {
        bool isFound = true;

        for (size_t j = 0; j < substrLen; j++)
        {
            if (text[i + j] != substring[j])
            {
                isFound = false;
                break;
            }
        }
        if (isFound)
        {
            for (size_t j = 0; j < substrLen; j++)
            {
                text[i + j] = '*';
            }
        }
    }
}

void replaceWord(char text[], char word[])
{
    toLower(text);

    int wordLen = strlen(word);
    int textLen = strlen(text);

    for (size_t i = 0; i < textLen - wordLen; i++)
    {
        bool isStart = (i == 0) || !isLetter(text[i - 1]);
        bool isEnd = (text[i + wordLen] == '\0') || !isLetter(text[i + wordLen]);

        if (!isStart || !isEnd)
            continue;

        bool isFound = true;

        for (size_t j = 0; j < wordLen; j++)
        {
            if (text[i + j] != word[j])
            {
                isFound = false;
                break;
            }
        }

        if (isFound)
        {
            for (size_t j = 0; j < wordLen; j++)
            {
                text[i + j] = '*';
            }
        }
    }
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

    // 5
    // char str2[MAX_SIZE], str3[MAX_SIZE];
    // std::cin.getline(str2, MAX_SIZE, '\n');
    // std::cin.getline(str3, MAX_SIZE, '\n');
    // longestPrefix(text, str2, str3);

    // 6
    // char str2[MAX_SIZE];
    // std::cin.getline(str2, MAX_SIZE, '\n');
    // std::cout << strCompare(text, str2);

    // 7
    // removeDuplicates(text);
    // std::cout << text;

    // 8
    // char word[MAX_SIZE];
    // std::cin.getline(word, MAX_SIZE, '\n');
    // std::cout << returnIndexOfWord(text, word);

    // 9
    // char str[MAX_SIZE];
    // std::cin.getline(str, MAX_SIZE, '\n');
    // std::cout << countOfStr(text, str);

    // 10
    // char substring[MAX_SIZE];
    // std::cin.getline(substring, MAX_SIZE, '\n');
    // replaceSubstr(text, substring);
    // std::cout << text;

    // 11
    // char word[MAX_SIZE];
    // std::cin.getline(word, MAX_SIZE, '\n');
    // replaceWord(text, word);
    // std::cout << text;
}