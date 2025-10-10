#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    bool isValidGrade = (n >= 2 && n <= 6);

    std::cout << isValidGrade;
}