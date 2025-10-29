#include <iostream>

double triangleSide(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double trianglePer(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double a = triangleSide(x1, y1, x2, y2);
    double b = triangleSide(x2, y2, x3, y3);
    double c = triangleSide(x3, y3, x1, y1);

    return a + b + c;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    std::cout << trianglePer(x1, y1, x2, y2, x3, y3);
}