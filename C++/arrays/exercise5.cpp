#include <iostream>

int main() {
    // 1. Декларираме масив от 5 елемента (double за оценките)
    double grades[5];
    double sum = 0.0;

    // 2. Въвеждане на 5-те оценки и пресмятане на сумата им
    std::cout << "Enter 5 grades:";
    for (int i = 0; i < 5; i++) {
        std::cin >> grades[i];
        sum += grades[i];
    }

    // 3. Пресмятане на средната стойност
    double average = sum / 5;

    // 4. Втори цикъл: брои колко оценки са по-големи или равни на средната
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (grades[i] >= average) {
            count++;
        }
    }

    // 5. Извеждане на резултатите на английски
    std::cout << "Average grade: " << average << std::endl;
    std::cout << "Grades above or equal to average: " << count << std::endl;

    return 0;
}