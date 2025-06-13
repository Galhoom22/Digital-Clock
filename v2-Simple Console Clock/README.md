# 🕒 Simple Console Clock V2.0

## 📝 Description

This is the second version of the simple console-based digital clock. It displays the time in a clean, zero-padded `HH:MM:SS` format and is built using modern, more portable C++ features.

## 📸 Screenshot

A screenshot of the project in action, named `project1.*`, can be found inside the `image & video` folder.

## ✨ What's New in V2.0?

This version introduces several key improvements over the original:

-   **Modern Time Libraries:** The project now uses the standard C++ `<chrono>` and `<thread>` libraries instead of the Windows-specific `Sleep()` function. This makes the core timing logic platform-independent.
-   **Formatted Output:** By using the `<iomanip>` library, the time is always displayed with leading zeros (e.g., `07:05:09`), providing a consistent and professional look.
-   **Improved Portability:** The code is now much easier to adapt for other systems like Linux or macOS by simply changing `"cls"` to `"clear"`.

## 🖥️ Compatibility

The core logic is now cross-platform. The only platform-specific command is for clearing the screen:
-   **For Windows:** Use `system("cls");` (as it is in the code).
-   **For Linux/macOS:** Change `system("cls");` to `system("clear");`.

## ▶️ How to Run

1.  **Compiler:** You need a standard C++ compiler (like g++ or Clang).
2.  **Compile:** Open your terminal and compile the `.cpp` file:
    ```sh
    g++ your_file_name.cpp -o clock.exe
    ```
3.  **Execute:** Run the generated executable.
4.  **Input:** The program will ask for the starting time.

## 🌱 Project Status

This is the second major release, featuring significant code quality and portability enhancements.

## 🚀 Future Development

A third version is planned, which will continue to build on this improved foundation. Stay tuned!