#include <iostream>


int main() {
    // 1. Декларираме и инициализираме масив с 6 елемента[cite: 4, 6]
    int numbers[6] = {1, 2, 3, 4, 5, 6};

    // 2. Обръщане на масива "на място" (In-place Swap)
    // Цикълът върви само до средата на масива (6 / 2 = 3 размени)
    for (int i = 0; i < 3; i++) {
        // Разменяме стойностите на елемента от началото (i) и от края (6 - 1 - i)
        int temp = numbers[i];//текуща променлива
        numbers[i] = numbers[6 - 1 - i];
        numbers[6 - 1 - i] = temp;
    }

    // 3. Извеждане на обърнатия масив[cite: 8]
    std::cout << "Reversed array: ";
    for (int i = 0; i < 6; i++) {
        std::cout << numbers[i] << " ";
    }


    return 0;
}