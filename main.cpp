#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int playerMove;
    int computerMove;
    int repeatGame;

    do {
        cout << "Welcome to the game 'Rock, Paper, Scissors'!\n";

        do {
            computerMove = rand() % 3 + 1;

            cout << "Choose your move (1 - rock, 2 - paper, 3 - scissors): ";
            cin >> playerMove;

            while (playerMove < 1 || playerMove > 3) {
                cout << "Invalid choice! Please choose a number from 1 to 3: ";
                cin >> playerMove;
            }

            cout << "Computer's move: ";
            switch (computerMove) {
                case 1: cout << "rock\n"; break;
                case 2: cout << "paper\n"; break;
                case 3: cout << "scissors\n"; break;
            }

            if (playerMove == computerMove) {
                cout << "Draw! Repeating the round.\n";
            }
        } while (playerMove == computerMove);

        if ((playerMove == 1 && computerMove == 3) ||
            (playerMove == 2 && computerMove == 1) ||
            (playerMove == 3 && computerMove == 2)) {
            cout << "You won!\n";
        } else {
            cout << "Computer won!\n";
        }

        cout << "Do you want to play again? (1 - yes, 0 - no): ";
        cin >> repeatGame;

    } while (repeatGame == 1);

    cout << "Thank you for playing!\n";
    return 0;
}
