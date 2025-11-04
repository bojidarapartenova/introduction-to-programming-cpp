#include <iostream>

int main()
{
    int day, month;
    std::cin >> day >> month;

    bool isDateValid = true;

    int maxDays;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        maxDays = 30;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        maxDays = 31;
    }
    else if (month == 2)
    {
        maxDays = 28;
    }
    else
    {
        isDateValid = false;
    }

    if (day > maxDays)
    {
        isDateValid = false;
    }

    if (isDateValid)
    {
        day++;

        if (day > maxDays)
        {
            month++;
            day = 1;

            if (month > 12)
            {
                month = 1;
            }
        }

        std::cout << day << " " << month;
    }
    else
    {
        std::cout << "Invalid date";
    }
}