#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Send the random number generator
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until the user guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly!" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}