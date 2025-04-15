# 🎮 GuessMaster - A Fun Number Guessing Game (C++ with SFML)

  

Welcome to **GuessMaster** — a simple yet engaging graphical number guessing game built using **C++** and the **SFML (Simple and Fast Multimedia Library)**. Whether you're testing your luck or improving your intuition, GuessMaster is a light-weight game to enjoy a few fun rounds of guessing!

* * *

## 🔗 Repository

**GitHub:** [https://github.com/atharvbyadav/GuessMaster](https://github.com/atharvbyadav/GuessMaster)

* * *

## 🚀 Features

*   🎲 Random number generation between **1 to 100**
*   ⌨️ Real-time input handling
*   🟡 Instant feedback: _Too Low_, _Too High_, or _Correct!_
*   ✨ Clean and responsive GUI built using **SFML**
*   🖥️ Executable file included for direct play without compilation

* * *

## 📁 File Structure

```plain
GuessMaster/
├── game.cpp          # Main source code file
├── Executables/GuessMaster       # Precompiled Linux executable (rename if necessary)
├── LICENSE           # licensed under the MIT License
└── README.md         # Project documentation
```

* * *

## 🎮 How to Play

1. Launch the game.
2. Type your guess using number keys.
3. Hit `Enter` to submit your guess.
4. The game provides feedback on whether your guess is too high, too low, or correct.
5. Win the game by guessing the correct number!

* * *

## 🛠️ Build Instructions

### ✅ Prerequisites

Make sure SFML is installed on your system.

  

**On Debian/Ubuntu:**

```bash
sudo apt update
sudo apt install libsfml-dev
```

  

### 🔧 Compile Manually

To build the game from source:

```bash
g++ game.cpp -o GuessMaster -lsfml-graphics -lsfml-window -lsfml-system
./GuessMaster
```

> You can also use CMake or your preferred IDE to compile the project.

* * *

## 📦 Run Without Compilation (Executable Included)

If you’re on **Linux**, you can directly run the included executable:

```bash
chmod +x GuessMaster
./GuessMaster
```

> Make sure you have `libsfml` dependencies installed.

* * *

## 🧠 Behind the Scenes

*   Uses C++'s `<random>` library for true random number generation.
*   GUI elements like text rendering and input handling are managed using SFML.
*   Input is taken directly from the keyboard, supporting number entry, backspace, and enter events.

* * *

## 🤝 Contributing

Got suggestions or want to improve this project? Feel free to fork the repository, submit issues, or open pull requests. Contributions are always welcome!

* * *

## 📃 License

This project is licensed under the [MIT License](http://LICENSE). You are free to use, modify, and distribute this project with attribution.

* * *

## 👨‍💻 Author

**Atharv Yadav**

📌 [GitHub](https://github.com/atharvbyadav)

* * *

Enjoy the game and feel free to share it! 🎉

* * *