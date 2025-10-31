#include <iostream>

bool isInInterval(int n, int from, int to)
{
    return (n >= from && n <= to);
}

int askUser(int from, int to)
{
    int n;
    std::cin >> n;

    while (!isInInterval(n, from, to))
    {
        std::cin >> n;
    }

    return n;
}

int main()
{
    int from, to;
    std::cin >> from >> to;

    std::cout << askUser(from, to) << std::endl;
}