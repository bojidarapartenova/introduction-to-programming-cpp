#include <iostream>
using namespace std;

int main()
{
    int hours;
    cin >> hours;
    int minutes;
    cin >> minutes;

    minutes += 15;

    if (minutes > 59)
    {
        minutes -= 60;
        hours++;
    }

    if (hours > 23)
    {
        hours -= 24;
    }

    if (hours < 10 && minutes < 10)
    {
        cout << "0" << hours << ":" << "0" << minutes;
    }
    else if (hours < 10)
    {
        cout << "0" << hours << ":" << minutes;
    }
    else if (minutes < 10)
    {
        cout << hours << ":" << "0" << minutes;
    }
    else
    {
        cout << hours << ":" << minutes;
    }
}