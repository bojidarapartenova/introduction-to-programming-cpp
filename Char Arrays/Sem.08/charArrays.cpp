#include <iostream>
int MAX_SIZE = 1000;

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

bool startsWith(const char *text, const char *word, int pos)
{
    int i = 0;
    while (word[i] != '\0')
    {
        if (text[pos + i] != word[i])
            return false;
        i++;
    }
    return true;
}

void replaceInPlace(char text[], const char where[], const char what[])
{
    int n = strlen(text);
    int lenW = strlen(where);
    int lenR = strlen(what);

    if (lenW == 0)
        return;

    int count = 0;
    for (int i = 0; i <= n - lenW; i++)
    {
        if (startsWith(text, where, i))
        {
            count++;
            i += lenW - 1;
        }
    }

    if (count == 0)
        return;

    int newLen = n + count * (lenR - lenW);

    int i = n - 1;
    int j = newLen - 1;

    text[newLen] = '\0';

    while (i >= 0)
    {
        if (i - lenW + 1 >= 0 && startsWith(text, where, i - lenW + 1))
        {
            for (int k = lenR - 1; k >= 0; k--)
            {
                text[j--] = what[k];
            }
            i -= lenW;
        }
        else
        {
            text[j--] = text[i--];
        }
    }
}

void toUpper(char text[])
{
    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - ('a' - 'A');
        }
    }
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

bool isLetter(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

int countOfWords(char text[])
{
    int count = 0;
    bool isWord = false;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isLetter(text[i]))
        {
            if (!isWord)
            {
                count++;
                isWord = true;
            }
        }
        else
        {
            isWord = false;
        }
    }
    return count;
}

bool sameWord(const char *a, const char *b)
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            return false;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

void mostCommonWord(char text[])
{
    toLower(text);

    char current[1000];
    char temp[1000];
    char best[1000];

    int bestCount = 0;

    int i = 0;
    while (text[i] != '\0')
    {
        int idx = 0;

        while (text[i] != '\0' && !isLetter(text[i]))
            i++;

        while (text[i] != '\0' && isLetter(text[i]))
            current[idx++] = text[i++];

        current[idx] = '\0';

        if (idx == 0)
            continue;

        int count = 0;
        int j = 0;

        while (text[j] != '\0')
        {
            int t = 0;
            int k = j;

            while (text[k] != '\0' && !isLetter(text[k]))
                k++;

            while (text[k] != '\0' && isLetter(text[k]))
            {
                temp[t++] = text[k++];
            }
            temp[t] = '\0';

            if (t > 0 && sameWord(temp, current))
                count++;

            j = k;
        }

        if (count > bestCount)
        {
            bestCount = count;

            int b = 0;
            while (current[b] != '\0')
            {
                best[b] = current[b];
                b++;
            }
            best[b] = '\0';
        }
    }

    std::cout << best;
}

int compareWords(const char *a, const char *b)
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }

    if (a[i] == '\0' && b[i] != '\0')
        return -1;
    if (a[i] != '\0' && b[i] == '\0')
        return 1;

    return 0;
}

void smallestWord(char text[])
{
    toLower(text);

    char current[MAX_SIZE];
    char best[MAX_SIZE];
    bool isFound = false;

    int i = 0;
    while (text[i] != '\0')
    {
        while (text[i] != '\0' && !isLetter(text[i]))
        {
            i++;
        }

        int idx = 0;
        while (text[i] != '\0' && isLetter(text[i]))
        {
            current[idx++] = text[i++];
        }
        current[idx] = '\0';

        if (idx == 0)
        {
            continue;
        }

        if (!isFound)
        {
            int k = 0;
            while (current[k] != '\0')
            {
                best[k] = current[k];
                k++;
            }
            best[k] = '\0';
            isFound = true;
        }
        else
        {
            if (compareWords(current, best) < 0)
            {
                int k = 0;
                while (current[k] != '\0')
                {
                    best[k] = current[k];
                    k++;
                }
                best[k] = '\0';
            }
        }
    }
    std::cout << best;
}

int main()
{
    char text[MAX_SIZE];
    std::cin.getline(text, MAX_SIZE, '\n');

    // char oldWord[MAX_SIZE];
    // std::cin.getline(oldWord, MAX_SIZE, '\n');
    // char newWord[MAX_SIZE];
    // std::cin.getline(newWord, MAX_SIZE, '\n');
    // replaceInPlace(text, oldWord, newWord);
    // std::cout << text;

    // 2
    //  toUpper(text);
    //  std::cout << text << std::endl;
    //  toLower(text);
    //  std::cout << text;

    // 3
    // std::cout << countOfWords(text);

    // 4
    // mostCommonWord(text);

    // 5
    // smallestWord(text);
}