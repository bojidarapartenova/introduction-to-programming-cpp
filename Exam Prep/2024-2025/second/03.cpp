#include <iostream>

struct Point
{
    int x;
    int y;
};

int checkQ(Point point)
{
    int x = point.x;
    int y = point.y;

    if (x == 0 || y == 0)
    {
        return 0;
    }
    else if (x > 0 && y > 0)
    {
        return 1;
    }
    else if (x < 0 && y > 0)
    {
        return 2;
    }
    else if (x < 0 && y < 0)
    {
        return 3;
    }
    else if (x > 0 && y < 0)
    {
        return 4;
    }
    return -1;
}

int main()
{
    Point point;
    int x, y;
    std::cin >> x >> y;
    point.x = x;
    point.y = y;

    int result = checkQ(point);

    std::cout << result;
}