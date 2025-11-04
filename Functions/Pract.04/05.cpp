#include <iostream>

void print(char s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << s << " ";
    }
}

int main()
{
    char s;
    int n;

    std::cin >> s >> n;

    print(s, n);
}