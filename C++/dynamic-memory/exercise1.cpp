#include <iostream>

// Функция, която приема адресите на двете променливи чрез указатели
void swapSpeeds(int* p1, int* p2) {
    // Проверка за валидни указатели (добра практика)
    if (p1 == nullptr || p2 == nullptr) {
        return;
    }

    // Вземаме стойността зад първия адрес и я запазваме във временна променлива
    int temp = *p1; // dereference p1

    // Записваме стойността зад втория адрес на мястото на първия
    *p1 = *p2;

    // Записваме пазената стойност на мястото на втория адрес
    *p2 = temp;
}

int main() {
    int carA = 120;
    int carB = 80;


    std::cout << "carA = " << carA << " km/h" << std::endl;
    std::cout << "carB = " << carB << " km/h" << std::endl;

    // Подаваме адресите на carA и carB чрез оператора &
    swapSpeeds(&carA, &carB);

    std::cout << "carA = " << carA << " km/h" << std::endl;
    std::cout << "carB = " << carB << " km/h" << std::endl;

    return 0;
}