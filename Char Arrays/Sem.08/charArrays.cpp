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
}