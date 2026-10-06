#include <iostream>
#include "cstdlib"
#include "ctime"
using namespace std;
int main() {
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout<<"Guesss a number betweene 1 and 100"<<endl;
    do {
     cout<<"enter your guess";
        cin>>guess;
        attempts++;
        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Correct! You got it in " << attempts << " attempts." << endl;
        }

    } while (guess !=  secretNumber);
    return 0;
}