#include <iostream>
#include <chrono> // for working with time
#include <thread> // for multithreading and thread control
#include <iomanip> // for formatting output
using namespace std;

int main() {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    cout << "Enter hours (0-23): ";
    cin >> hours;

    cout << "Enter minutes (0-59): ";
    cin >> minutes;

    cout << "Enter seconds (0-59): ";
    cin >> seconds;

    while (true) {
		system("cls"); // clear the screen (for Windows only) for linux or Online Compiler use "clear" instead
        cout << setfill('0') << setw(2) << hours << ":"
            << setfill('0') << setw(2) << minutes << ":"
            << setfill('0') << setw(2) << seconds << endl;

        this_thread::sleep_for(chrono::seconds(1)); // wait for 1 second
        seconds++;

        if (seconds >= 60) {
            seconds = 0;
            minutes++;
        }

        if (minutes >= 60) {
            minutes = 0;
            hours++;
        }

        if (hours >= 24) {
            hours = 0;
        }
    }

    return 0;
}
