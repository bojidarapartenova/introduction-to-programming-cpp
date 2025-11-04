#include <iostream>
using namespace std;

int main()
{
    char shape;
    cin >> shape;

    double area;

    switch (shape)
    {
    case 's':
    {
        double a;
        cin >> a;

        area = a * a;
    }
    break;
    case 'r':
    {
        double a;
        cin >> a;
        double b;
        cin >> b;

        area = a * b;
    }
    break;
    case 'c':
    {
        double r;
        cin >> r;

        area = M_PI * r * r;
    }
    break;
    case 't':
    {
        double a;
        cin >> a;
        double h;
        cin >> h;

        area = (a * h) / 2;
    }
    break;
    }
    cout << area;
}