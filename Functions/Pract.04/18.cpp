#include <iostream>

bool isSimple(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void allSimpleNums(int to)
{
    for (int i = 2; i <= to; i++)
    {
        if (isSimple(i))
        {
            std::cout << i << " ";
        }
    }
}

void canBeSimpleSum(int n)
{
    for (int i = 2; i <= n; i++)
    {
        int j = n - i;
        if (isSimple(i) && isSimple(j))
        {
            std::cout << "yes: " << i << "+" << j << "=" << n << std::endl;
            return;
        }
    }
    std::cout << "no" << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    if (isSimple(n))
    {
        std::cout << n << " is simple" << std::endl;
    }
    else
    {
        std::cout << n << " is not simple" << std::endl;
    }

    canBeSimpleSum(n);

    int to;
    std::cin >> to;
    std::cout << "all simple numbers to " << to << std::endl;
    allSimpleNums(to);
}