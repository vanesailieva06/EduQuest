#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Константа за минималната работна заплата
    const double MIN_SALARY = 1077.0;

    double budget;
    int employees;

    cout << "Budget:";
    cin >> budget;

    cout << "Number of employees:";
    cin >> employees;

    // Изчисляване на необходимия бюджет
    double requiredBudget = employees * MIN_SALARY;

    if (budget >= requiredBudget) {
        cout << "The budget is enough." << endl;
    } else {
        // Максимален брой служители, които могат да получат поне минимална заплата
        int maxAffordableEmployees = budget / MIN_SALARY;

        // Брой служители за съкращение
        int employeesToLayOff = employees - maxAffordableEmployees;

        cout << "The budget is NOT enough!" << endl;
        cout << "The company need to lay off " << employeesToLayOff << " employee(s)." << endl;
    }

    return 0;
}
