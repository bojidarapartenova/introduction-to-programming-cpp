#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if ((num1 >= num2) || (num1 <= num2) && ((num2 >= num1 && num2 >= num3) || (num2 <= num1 && num2 <= num3)) && ((num3 >= num2 && num3 >= num4) || (num3 <= num2 && num3 <= num4)) && ((num4 >= num3 && num4 >= 5) || (num4 <= num3 && num4 <= num5)) && (num5 >= num4) || (num5 <= num4))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}