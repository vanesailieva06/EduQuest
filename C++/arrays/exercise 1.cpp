#include <iostream>

int main() {
    // 1. Деклариране на масив с 6 елемента
    int numbers[6] = {};
    int sum = 0; // сумата на четните числа

    // 2. Въвеждане на елементите с for цикъл
    std::cout << "Enter 6 integer numbers:";
    //1 2 3 4 5 6
    for (int i = 0; i < 6; i++) {
        std::cin >> numbers[i];
    }

    // 3. Намиране на сумата само на четните числа с if проверка
    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 0) { // Проверка дали числото е четно
            sum += numbers[i];// sum = sum + numbers[i]
        }
    }

    // 4. Извеждане на резултата на английски
    std::cout << "Sum of even numbers: " << sum << std::endl;

    return 0;
}