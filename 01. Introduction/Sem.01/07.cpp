#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int hundred = n / 100;
    n %= 100;

    int fifty = n / 50;
    n %= 50;

    int twenty = n / 20;
    n %= 20;

    int ten = n / 10;
    n %= 10;

    int five = n / 5;
    n %= 5;

    int two = n / 2;
    n %= 2;

    int one = n;

    std::cout << hundred << "x100lv "
              << fifty << "x50lv "
              << twenty << "x20lv "
              << ten << "x10lv "
              << five << "x5lv "
              << two << "x2lv "
              << one << "x1lv";
}