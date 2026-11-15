#include <iostream>

int main() {
    int number;
    std::cin >> number;

    // Взимаме абсолютната стойност, ако числото е отрицателно
    bool isNegative = number < 0;
    if (isNegative) {
        number = -number;
    }

    int reversedNumber = 0;

    // Специална проверка за 0
    if (number == 0) {
        reversedNumber = 0;
    }

    while (number > 0) {
        int lastDigit = number % 10;                     // Взимаме последната цифра
        reversedNumber = reversedNumber * 10 + lastDigit; // Добавяме я към обърнатото число
        number /= 10;                                    // Премахваме последната цифра
    }

    if (isNegative) {
        std::cout << "-";
    }

    std::cout << reversedNumber << std::endl;

    return 0;
}