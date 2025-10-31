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

void getFactorization(int num)
{
    int temp = num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (isSimple(i) && temp % i == 0)
        {
            while (temp % i == 0)
            {
                if (temp == i)
                {
                    std::cout << i;
                    break;
                }

                temp /= i;
                std::cout << i << ".";
            }
        }
    }
}

int main()
{
    int num;
    std::cin >> num;

    getFactorization(num);
}