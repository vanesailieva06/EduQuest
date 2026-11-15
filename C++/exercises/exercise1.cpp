#include <iostream>

int main() {
    int day, month, year;

    std::cin >> day >> month >> year;

    // Флаг за валидност
    bool isValid = true;

    // 1. Проверка за валидна година и месец
    if (year < 1 || month < 1 || month > 12) {
        isValid = false;
    } else {
        // 2. Определяне на максималния брой дни за дадения месец
        int maxDays = 0;

        if (month == 2) {
            maxDays = 28; // По условие приемаме 28 дни за февруари
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30; // Месеци с 30 дни
        } else {
            maxDays = 31; // Месеци с 31 дни (1, 3, 5, 7, 8, 10, 12)
        }

        // 3. Проверка дали денят е в границите [1, maxDays]
        if (day < 1 || day > maxDays) {
            isValid = false;
        }
    }

    // Изход
    if (isValid) {
        std::cout << "Valid date" << std::endl;
    } else {
        std::cout << "Invalid date" << std::endl;
    }

    return 0;
}