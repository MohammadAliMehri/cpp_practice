#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "enter a number of week (1-7): ";
    cin >> day;

    if (day == 1)
    {
        cout << "Saturday";
    }
    else if (day == 2)
    {
        cout << "Sunday";
    }
    else if (day == 3)
    {
        cout << "Monday";
    }
    else if (day == 4)

        cout << "Tuesday";
    else if (day == 5)
    {
        cout << "Wednesday";
    }
    else if (day == 6)
    {
        cout << "Thursday";
    }
    else if (day == 7)
    {
        cout << "Friday";
    }
    else
    {
        cout << "error!";
    }
    return 0;
}