# TimerCXX
This is a simple timer program written in C++ using the C++11 standard.
# Timer

This is a simple timer program written in C++ using the C++11 standard.

## Building and Running

### Requirements
- CMake (version 3.12 or higher)
- C++ compiler with C++11 support

### Build Instructions
1. Clone the repository:
    ```sh
    git clone https://github.com/ваш_пользователь/Timer.git
    cd Timer
    ```

2. Create a build directory:
    ```sh
    mkdir build
    cd build
    ```

3. Generate build files with CMake:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    cmake --build .
    ```

### Running the Program
After building the project, you can run the executable:
```sh
./Timer
```

## Usage
The program is a simple timer that counts down from a specified time. By default, it starts with 1 hours and 30 minutes. You can modify the initial time in the main function of timer.cpp. The reduction speed has been increased for demonstration.

## License
This project is licensed under the MIT License.
