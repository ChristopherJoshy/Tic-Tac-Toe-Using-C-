# 🕹️ Tic-Tac-Toe Game in C++ 🎮

This project is a command-line implementation of the classic **Tic-Tac-Toe** game built using C++. Two players can take turns to play on a 3x3 grid with 'X' and 'O'. It features clean input handling, win detection, and support for tie games.

## 🎯 Features
- **Two-player turn-based gameplay**: Players alternate turns to place their marker ('X' or 'O') on the board.
- **Smart input validation**: Prevents invalid moves by ensuring players can only choose from available slots.
- **Automatic win or tie detection**: The game instantly announces the winner or declares a tie if no valid moves are left.
- **Minimalist interface**: The game is played entirely in the command line, making it quick and easy to run on any system.

## 🛠️ How to Run the Game

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/tic-tac-toe-cpp.git
    ```

2. **Navigate to the project folder**:
    ```bash
    cd tic-tac-toe-cpp
    ```

3. **Compile the code**:
    If you're using `g++`, you can compile the game using:
    ```bash
    g++ -o tictactoe tictactoe.cpp
    ```

4. **Run the game**:
    ```bash
    ./tictactoe
    ```

## 📸 Screenshots

Here’s what the game looks like in action:

```
Player 1, choose your marker (X or O): X
  1 | 2 | 3
 ---|---|---
  4 | 5 | 6
 ---|---|---
  7 | 8 | 9
Player 1's turn. Enter slot: 5
  1 | 2 | 3
 ---|---|---
  4 | X | 6
 ---|---|---
  7 | 8 | 9
Player 2's turn. Enter slot: 3
  1 | 2 | O
 ---|---|---
  4 | X | 6
 ---|---|---
  7 | 8 | 9
```

## 🚀 Future Improvements

- **AI Opponent**: Add a single-player mode with an AI opponent that uses a basic strategy.
- **Graphical Interface**: Implement a GUI version using a library like SDL or SFML.
- **Customization**: Allow players to customize the size of the grid or their marker.

## 🧑‍💻 Contributions
Feel free to fork this repository and contribute! If you encounter any bugs or have feature requests, please open an issue or submit a pull request.

Made with ❤️ by [Christopher Joshy](https://github.com/ChristopherJoshy)
