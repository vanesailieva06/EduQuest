#include <iostream>

int main() {
    int number;

    std::cin >> number;

    // Взимаме абсолютната стойност, за да работим правилно и с отрицателни числа
    if (number < 0) {
        number = -number;
    }


    int maxDigit = 0;
    bool allEven = true; // Начална предпоставка: всички цифри са четни

    // Временна променлива, за да не променяме оригиналното число (ако ни трябва по-късно)
    int temp = number;

    while (temp > 0) {
        int lastDigit = temp % 10; // Взимаме последната цифра

        // Проверка за най-голяма цифра
        if (lastDigit > maxDigit) {
            maxDigit = lastDigit;
        }

        // Проверка дали цифрата е нечетна
        if (lastDigit % 2 != 0) {
            allEven = false;
        }

        temp /= 10; // Премахваме последната цифра
    }

    // Изход
    std::cout << "The largest digit: " << maxDigit << std::endl;
    std::cout << "Even digits: "
              << (allEven ? "True" : "False")
              << std::endl;

    return 0;
}