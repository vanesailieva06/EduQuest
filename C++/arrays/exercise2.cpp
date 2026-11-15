#include <iostream>

int main() {
    // 1. Директна инициализация на масив с 5 double елемента
    double numbers[5] = {1.5, 2.0, 3.5, 4.0, 5.0};

    // 2. Цикъл за масова промяна (умножаване на всеки елемент по 2)
    for (int i = 0; i < 5; i++) {
        numbers[i] = numbers[i] * 2;
    }

    // 3. Извеждане на новите стойности на екрана
    std::cout << "Updated array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}