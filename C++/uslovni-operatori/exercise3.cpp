#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int userChoice;
    int otherUserChoice;
    // Генерира число от 1 до 3

    cout << "=== Rock, Paper, Scissors Game ===" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;
    cout <<"Enter other user choice:";
    cin>>otherUserChoice;

    // Валидация на входа
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please select a number between 1 and 3." << endl;
        return 1;
    }

    // Покажи избора на играча
    cout << "You chose: ";
    if (userChoice == 1) {
        cout << "Rock" << endl;
    }
    else if (userChoice == 2) {
        cout << "Paper" << endl;
    }
    else {
        cout << "Scissors" << endl;
    }

    // Покажи избора на компютъра
    cout << "Other user chose: ";
    if (otherUserChoice == 1) cout << "Rock" << endl;
    else if (otherUserChoice == 2) cout << "Paper" << endl;
    else cout << "Scissors" << endl;

    // Определяне на победителя
    if (userChoice == otherUserChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && otherUserChoice == 3) ||
               (userChoice == 2 && otherUserChoice == 1) ||
               (userChoice == 3 && otherUserChoice == 2)) {
        cout << "You win!" << endl;
               } else {
                   cout << "You lose! The other user wins." << endl;
               }

    return 0;
}