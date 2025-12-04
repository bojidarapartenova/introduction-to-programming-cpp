#include <iostream>
const int MAX_SIZE = 1000;

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

int strcmp(char arr1[], char arr2[])
{
    int i = 0;

    while (arr1[i] != '\0' && arr2[i] != '\0')
    {
        if (arr1[i] != arr2[i])
            return arr1[i] - arr2[i];

        i++;
    }
    return arr1[i] - arr2[i];
}

void strcat(char arr1[], char arr2[])
{
    int i = 0;
    while (arr1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while (arr2[j] != '\0')
    {
        arr1[i] = arr2[j++];
        i++;
    }
    arr1[i] = '\0';
}

void strcpy(char destination[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int аtoi(char arr[])
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (arr[i] == ' ')
    {
        i++;
    }

    if (arr[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (arr[i] >= '0' && arr[i] <= '9')
    {
        result = result * 10 + (arr[i] - '0');
        i++;
    }
    return result * sign;
}

int searchInText(char text[], char word[])
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        int j = 0;
        while (word[j] != '\0' && text[i + j] == word[j])
        {
            j++;
        }

        if (word[j] == '\0')
        {
            return i;
        }
    }
    return -1;
}

int getCharoOccurrencesCount(char text[], char ch)
{
    int count = 0;

    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == ch)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char charArr[MAX_SIZE];
    std::cin.getline(charArr, MAX_SIZE, '\n');

    char charArr2[MAX_SIZE];
    std::cin.getline(charArr2, MAX_SIZE, '\n');

    // 1
    // std::cout << "length: " << strlen(charArr);

    // 2
    // std::cout << strcmp(charArr, charArr2);

    // 3
    // strcat(charArr, charArr2);
    // std::cout << charArr;

    // 4
    // strcpy(charArr, charArr2);

    // 5
    // std::cout << atoi(charArr);

    // 6
    char word[MAX_SIZE];
    std::cin.getline(word, MAX_SIZE, '\n');
    std::cout << searchInText(charArr, word);

    // 7
    // char ch;
    // std::cin >> ch;
    // std::cout << getCharoOccurrencesCount(charArr, ch);
}