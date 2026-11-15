#include <iostream>

int main() {
    int n;

    std::cin >> n;

    if (n <= 0) {
        std::cout << "Numbers shoud be more than 0!" << std::endl;
        return 1;
    }

    double positiveSum = 0.0;
    int negativeCount = 0;
    double maxNumber = INT_MIN;

    std::cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        double currentNumber;
        std::cin >> currentNumber;

        // При първото въведено число инициализираме maxNumber с неговата стойност
        if (i == 0) {
            maxNumber = currentNumber;
        } else if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }

        // Сумиране на положителните числа (0 не променя сумата, затова може > 0)
        if (currentNumber > 0) {
            positiveSum += currentNumber;
        } 
        // Броене на отрицателните числа
        else if (currentNumber < 0) {
            negativeCount++;
        }
    }

    // Извеждане на резултатите
    std::cout << "Sum of the positive numbers: " << positiveSum << std::endl;
    std::cout << "Count of the negative numbers: " << negativeCount << std::endl;
    std::cout << "Max number: " << maxNumber << std::endl;

    return 0;
}