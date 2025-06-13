#include <iostream>
#include <Windows.h> // not working on online compiler
using namespace std;

int main()
{
    // variables
    int hours = 0, min = 0, sec = 0;
    // End of variables

    cout << "Hour: ";
    cin >> hours;
    cout << "min: ";
    cin >> min;
    cout << "sec: ";
    cin >> sec;

    while (true)
    {

        system("cls");
        if (sec > 59)
        {
            min++;
            sec = 0;
        }

        if (min > 59)
        {
            hours++;
            min = 0;
        }

        if (hours > 23)
        {
            hours = 0;
        }

        cout << hours << ":" << min << ":" << sec << endl;

        sec++;
        Sleep(900);
    }

    return 0;
}