#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator with the current time
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    while (userGuess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << "\n";
        }
    }

    return 0;
}
