#include <iostream>

int main() {
    // 1. Инициализация на масив от 7 елемента
    int numbers[7] = {10, 25, 30, 45, 50, 65, 70};
    int x;
    bool found = false;

    // 2. Въвеждане на търсеното число
    std::cout << "Enter a number to search for:";
    std::cin >> x;

    // 3. Линейно търсене с for цикъл и if проверка
    for (int i = 0; i < 7; i++) {
        if (numbers[i] == x) {
            std::cout << "Element found at index: " << i << std::endl;
            found = true;
            break; // Прекъсваме цикъла, когато намерим числото
        }
    }

    // 4. Ако числото не е намерено
    if (!found) {
        std::cout << "Number not found" << std::endl;
    }

    return 0;
}