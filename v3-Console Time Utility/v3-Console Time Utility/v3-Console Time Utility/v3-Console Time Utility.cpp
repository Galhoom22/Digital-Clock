#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cstdlib>
using namespace std;

// ---------- Function: Show Clock ----------
void showClock(int hours, int minutes, int seconds) {
    while (true) {
        system("cls");

        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;

        this_thread::sleep_for(chrono::seconds(1));
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
}

// ---------- Function: Alarm ----------
void startAlarm(int hours, int minutes, int seconds,
    int alarmHour, int alarmMinute, int alarmSecond) {
    while (true) {
        system("cls");

        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;

        if (hours == alarmHour && minutes == alarmMinute && seconds == alarmSecond) {
            cout << "\n\a*** ALARM! WAKE UP! ***" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        this_thread::sleep_for(chrono::seconds(1));
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
}

// ---------- Function: Countdown ----------
void startCountdown(int hours, int minutes, int seconds) {
    while (true) {
        system("cls");

        cout << "Countdown: ";
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;

        if (hours == 0 && minutes == 0 && seconds == 0) {
            cout << "\n\a*** TIME'S UP! ***" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        this_thread::sleep_for(chrono::seconds(1));

        // decrement
        if (seconds > 0) {
            seconds--;
        }
        else {
            if (minutes > 0) {
                minutes--;
                seconds = 59;
            }
            else {
                if (hours > 0) {
                    hours--;
                    minutes = 59;
                    seconds = 59;
                }
            }
        }
    }
}


int main() {
    int choice;
    int hours = 0, minutes = 0, seconds = 0;
    int alarmHour = 0, alarmMinute = 0, alarmSecond = 0;

    system("cls");
    cout << "===== Digital Clock Menu =====" << endl;
    cout << "1. Show Clock" << endl;
    cout << "2. Set Alarm" << endl;
    cout << "3. Countdown Timer" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Ask for initial time
    cout << "\nEnter current time:" << endl;
    cout << "Hours (0-23): ";
    cin >> hours;
    cout << "Minutes (0-59): ";
    cin >> minutes;
    cout << "Seconds (0-59): ";
    cin >> seconds;

    if (choice == 1) {
        showClock(hours, minutes, seconds);
    }
    else if (choice == 2) {
        // Ask for alarm time
        cout << "\nSet alarm time:" << endl;
        cout << "Hour (0-23): ";
        cin >> alarmHour;
        cout << "Minute (0-59): ";
        cin >> alarmMinute;
        cout << "Second (0-59): ";
        cin >> alarmSecond;

        startAlarm(hours, minutes, seconds, alarmHour, alarmMinute, alarmSecond);
    }
    else if (choice == 3) {
        int countHour, countMin, countSec;
        cout << "Enter countdown time: " << endl;
        cout << "Hours: ";
        cin >> countHour;
        cout << "Minutes: ";
		cin >> countMin;
        cout << "Seconds: ";
        cin >> countSec;
        startCountdown(countHour, countMin, countSec);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
