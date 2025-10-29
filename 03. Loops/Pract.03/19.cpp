#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int value;

            if (j % 2 == 0)
            {
                value = i + 1 + j * n;
            }
            else
            {
                value = (j + 1) * n - i;
            }
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}