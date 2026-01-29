#include <iostream>
const int MAX_SIZE = 100;

long findSeq(const char *arr, char s)
{
    int currCount = 0;
    int maxCount = 0;

    for (size_t i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == s)
        {
            currCount++;
        }
        else
        {
            currCount = 0;
        }

        if (currCount > maxCount)
        {
            maxCount = currCount;
        }
    }
    return maxCount;
}

int main()
{
    char arr[MAX_SIZE];
    std::cin.getline(arr, MAX_SIZE, '\n');

    char s;
    std::cin >> s;

    long result = findSeq(arr, s);
    std::cout << result;
}