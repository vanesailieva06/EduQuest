#include <iostream>

int main() {
    int capacity = 3; // Първоначален капацитет
    int size = 0;     // Брой въведени елементи към момента

    // Заделяме първоначалния динамичен масив[cite: 6, 9]
    int* inventory = new int[capacity];

    std::cout << "--- Dynamic Inventory Manager ---" << std::endl;
    std::cout << "Enter item IDs (enter -1 to stop):" << std::endl;

    int inputItem = 0;
    std::cin >> inputItem;
    while (inputItem == -1) {

        // Проверяваме дали масивът се е напълнил
        if (size == capacity) {
            int newCapacity = capacity * 2;
            std::cout << ">> Inventory full! Resizing capacity from " 
                      << capacity << " to " << newCapacity << "..." << std::endl;

            // 1. Заделяме нов, по-голям динамичен масив
            int* newInventory = new int[newCapacity];

            // 2. Преписваме старите стойности в новия масив
            for (int i = 0; i < size; i++) {
                newInventory[i] = inventory[i];
            }

            // 3. Освобождаваме стария масив с delete[][cite: 7, 13]
            delete[] inventory;

            // 4. Пренасочваме основния указател към новата памет
            inventory = newInventory;
            newInventory = nullptr;// Добра практика за почистване[cite: 9, 15]

            // 5. Обновяваме капацитета
            capacity = newCapacity;
        }

        // Добавяме новия елемент
        inventory[size] = inputItem;
        size++;
        std::cin >> inputItem;
    }

    // Извеждаме резултата
    std::cout << "Total items count: " << size << std::endl;
    std::cout << "Final capacity: " << capacity << std::endl;
    std::cout << "Items in inventory: ";

    if (size == 0) {
        std::cout << "(empty)";
    } else {
        for (int i = 0; i < size; i++) {
            std::cout << inventory[i] << " ";
        }
    }

    // Освобождаваме заделената памет[cite: 7, 9]
    delete[] inventory;
    inventory = nullptr; //[cite: 9, 15]

    return 0;
}