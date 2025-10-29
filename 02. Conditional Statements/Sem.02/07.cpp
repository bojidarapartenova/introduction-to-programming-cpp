#include <iostream>
using namespace std;

int main()
{
    int r, x, y;
    cin >> r >> x >> y;

    double distanceSquared = x * x + y * y;
    double radiusSquared = r * r;

    if (distanceSquared < radiusSquared)
    {
        cout << "In the circle";
    }
    else if (distanceSquared == radiusSquared)
    {
        cout << "On the circle";
    }
    else
    {
        cout << "Out of the circle";
    }
}