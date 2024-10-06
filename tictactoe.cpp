#include <iostream>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char marker;
int player;

void draw() {
    cout << "  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << " ---|---|---" << endl;
    cout << "  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << " ---|---|---" << endl;
    cout << "  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool mark(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = marker;
        return true;
    }
    return false;
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return player;
    }
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return player;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return player;

    return 0;
}

void togglePlayer() {
    marker = (marker == 'X') ? 'O' : 'X';
    player = (player == 1) ? 2 : 1;
}

bool isFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void game() {
    cout << "Player 1, choose your marker (X or O): ";
    cin >> marker;

    while (marker != 'X' && marker != 'O') {
        cout << "Invalid marker! Please choose X or O: ";
        cin >> marker;
    }

    player = 1;
    draw();

    int winner = 0;

    while (winner == 0 && !isFull()) {
        cout << "Player " << player << "'s turn. Enter slot (1-9): ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid slot! Try again." << endl;
            continue;
        }

        if (!mark(slot)) {
            cout << "Slot already taken! Try another." << endl;
            continue;
        }

        draw();
        winner = checkWin();

        if (winner == 0) {
            togglePlayer();
        }
    }

    if (winner != 0) {
        cout << "Player " << player << " wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    game();
    return 0;
}
