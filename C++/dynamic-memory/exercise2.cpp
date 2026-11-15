#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size!" << std::endl;
        return 1;
    }

    // Заделяме динамично масив за оригиналните данни
    int* inputArr = new int[n]; //

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> inputArr[i];
    }

    // 1. Преброяваме колко са четните числа
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (inputArr[i] % 2 == 0) {
            evenCount++;
        }
    }

    // 2. Проверяваме дали изобщо има намерени четни числа
    if (evenCount == 0) {
        std::cout << "No even numbers found in the dataset." << std::endl;
        
        // Освобождаваме оригиналния масив преди изход[cite: 7, 9]
        delete[] inputArr;
        inputArr = nullptr;
        return 0;
    }

    // 3. Заделяме динамично нов масив с точния размер за четните числа
    int* evenArr = new int[evenCount];

    // 4. Преписваме четните числа в новия масив
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (inputArr[i] % 2 == 0) {//i = 2
            evenArr[index] = inputArr[i];//evenArr[index]
            index++;
        }
    }

    // 5. Извеждаме филтрираните данни
    std::cout << "Filtered even numbers (" << evenCount << " total): ";
    for (int i = 0; i < evenCount; i++) {
        std::cout << evenArr[i] << " ";
    }

    // 6. Освобождаваме заделената памет в Heap-а[cite: 7, 9]
    delete[] inputArr;
    inputArr = nullptr; //[cite: 9, 15]

    delete[] evenArr; //[cite: 7, 13]
    evenArr = nullptr; //[cite: 9, 15]

    return 0;
}