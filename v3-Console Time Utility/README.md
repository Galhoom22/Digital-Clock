# 🕒 Console Time Utility V3.0

## 📝 Description

This is the third major version of the console time application. It has evolved from a simple clock into a multi-function time utility, offering a clock, an alarm, and a countdown timer, all accessible through an interactive menu.

## ✨ What's New in V3.0?

This version represents a major leap forward, transforming the project into a full-featured utility. The key updates are:

-   **Interactive Menu:** A user-friendly menu is now the first thing you see, allowing you to choose the desired function.
-   **Alarm Functionality:** You can now set a specific time for an alarm. The application will run a clock and sound a visual and audible alert (`\a`) when the set time is reached.
-   **Countdown Timer:** A brand new countdown feature has been added! You can set a duration, and the timer will count down to zero.
-   **Modular Code:** The logic has been professionally organized into separate functions (`showClock`, `startAlarm`, `startCountdown`), making the code much cleaner and easier to read and maintain.

## 🚀 Features

This utility now includes three main functions:

1.  **Digital Clock:** Displays a running clock based on a start time you provide.
2.  **Alarm:** Set a future time for an alert. Perfect for reminders.
3.  **Countdown Timer:** Set a duration (in hours, minutes, and seconds) and watch it count down.

## 💡 Code Structure

The project is now organized using functions to separate the logic for each feature. For example, all the code for the alarm is neatly contained within the `startAlarm()` function. This modular approach is a standard practice in software development that greatly improves code quality.

## 🖥️ Compatibility

The core logic is cross-platform. The only platform-specific command is for clearing the screen:
-   **For Windows:** Use `system("cls");` (as it is in the code).
-   **For Linux/macOS:** Change `system("cls");` to `system("clear");`.

## ▶️ How to Run

1.  **Compiler:** You need a standard C++ compiler (like g++ or Clang).
2.  **Compile:** Open your terminal and compile the `.cpp` file.
3.  **Execute:** After running the executable, you will be presented with a menu. Enter the number corresponding to your choice (1, 2, or 3) and then follow the on-screen prompts to set the required times.