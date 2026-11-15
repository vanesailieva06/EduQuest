#include <iostream>

// Претоварена функция 1: За изчисление на площ на квадрат
double calculateArea(double side) {
    // УЛОВКА: Проверка за валидност на страната (не може да е <= 0)
    if (side <= 0) {
        return -1.0; // Връщаме -1 като код за грешка
    }
    return side * side;
}

// Претоварена функция 2: За изчисление на площ на правоъгълник
double calculateArea(double a, double b) {
    // УЛОВКА: Проверка за валидност на двете страни
    if (a <= 0 || b <= 0) {
        return -1.0; // Връщаме -1 като код за грешка
    }
    return a * b;
}

int main() {
    int choice = -1; // Начална стойност, различна от 0


        std::cin >> choice;

        switch (choice) {
            case 1: {
                double side;

                std::cin >> side;

                double area = calculateArea(side); // Извиква първата версия
                if (area == -1.0) {
                    std::cout << "Invalid side" << std::endl;
                } else {
                    std::cout << "The area of the square is: " << area << std::endl;
                }
                break;
            }
            case 2: {
                double a, b;
                std::cin >> a >> b;

                double area = calculateArea(a, b); // Извиква претоварената версия за 2 параметъра
                if (area == -1.0) {
                    std::cout << "Ivalid side" << std::endl;
                } else {
                    std::cout << "The are of the rectange is: " << area << std::endl;
                }
                break;
            }

            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }


    return 0;
}