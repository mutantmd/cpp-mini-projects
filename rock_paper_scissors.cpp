#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getComputerChoice() {
    int r = rand() % 3;
    if (r == 0) return "rock";
    if (r == 1) return "paper";
    return "scissors";
}

void decideWinner(string player, string computer) {
    cout << "Computer chose: " << computer << endl;

    if (player == computer) {
        cout << "It's a tie!" << endl;
    } else if (
            (player == "rock" && computer == "scissors") ||
            (player == "paper" && computer == "rock") ||
            (player == "scissors" && computer == "paper")
            ) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    srand(time(NULL));
    string playerChoice;

    cout << "Enter rock, paper, or scissors: ";
    cin >> playerChoice;

    string computerChoice = getComputerChoice();
    decideWinner(playerChoice, computerChoice);

    return 0;
}