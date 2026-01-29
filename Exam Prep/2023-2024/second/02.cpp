#include <iostream>

int strLen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool wordInSeq(const char *seq, const char *word)
{
    int len = strLen(seq);
    int wordLen = strLen(word);

    for (size_t i = 0; i <= len - wordLen; i++)
    {
        int j = 0;
        while (j < wordLen && (seq[i + j]) == word[j])
        {
            j++;
        }

        if (j == wordLen)
        {
            return true;
        }
    }
    return false;
}

bool findWord(const char *const *grid, size_t m, size_t n, const char *word)
{
    for (size_t i = 0; i < m; i++)
    {
        char seq[n + 1];
        int index = 0;
        for (size_t j = 0; j < n; j++)
        {
            seq[index++] = grid[i][j];
        }
        seq[index] = '\0';

        if (wordInSeq(seq, word))
        {
            return true;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        char seq[m + 1];
        int index = 0;
        for (size_t j = 0; j < m; j++)
        {
            seq[index++] = grid[j][i];
        }
        seq[index] = '\0';

        if (wordInSeq(seq, word))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int m, n;
    std::cin >> m >> n;

    char **grid = new char *[m];
    for (size_t i = 0; i < m; i++)
    {
        grid[i] = new char[n + 1];
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> grid[i][j];
        }
        grid[i][n] = '\0';
    }

    char word[50];
    std::cin >> word;

    if (findWord(grid, m, n, word))
    {
        std::cout << "found";
    }
    else
    {
        std::cout << "not found";
    }

    for (size_t i = 0; i < m; i++)
    {
        delete[] grid[i];
    }
    delete[] grid;
}