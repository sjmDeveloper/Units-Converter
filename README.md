# Units Converter

## 1. About the Project
A lightweight desktop application built with C++ and Qt6 that converts values between different measurement units quickly and accurately (e.g., `10 kg -> 10,000 g`).

## 2. Motivation & Features
* **Motivation:** Created to practice and demonstrate clean, high-performance desktop application development using C++ and Qt6.
* **Key Features:**
  * **Instant Conversion:** Accurate calculation across multiple unit categories (Mass, Length, Temperature, etc.).
  * **Clean Interface:** Intuitive and responsive desktop UI.

## 3. Prerequisites & Installation
Before building and running the application, ensure you have **Qt6**, **CMake**, and a C++ compiler installed:

* **On Linux (Ubuntu/Debian):**
  ```bash
  sudo apt-get update && sudo apt-get install qt6-base-dev cmake build-essential
  ```
* **On Windows:**
  Download and install **Qt6** (along with MinGW and CMake) from the [Official Qt Download Page](https://qt.io).

## 4. Build & Run

### 1. Clone & Build
Open your Terminal (Linux) or Command Prompt (Windows) and run:
```bash
git clone https://github.com
cd Units-Converter
mkdir build && cd build
cmake ..
cmake --build .
```

### 2. Run the Application
* **On Linux:**
  ```bash
  ./UnitsConverter
  ```
* **On Windows (CMD):**
  ```cmd
  UnitsConverter.exe
  ```

## 5. Version
`1.0.0`
