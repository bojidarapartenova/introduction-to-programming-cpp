#include <iostream>

int main()
{
    const double dollar = 0.59;
    const double euro = 0.51;

    double leva;
    std::cin >> leva;

    double convertToDollar = leva * dollar;
    double convertToEuro = leva * euro;

    std::cout << convertToDollar << " dollars" << std::endl;
    std::cout << convertToEuro << " euros" << std::endl;
}