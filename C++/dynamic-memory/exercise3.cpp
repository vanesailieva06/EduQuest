#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size!" << std::endl;
        return 1;
    }

    // Заделяме динамично масив за числата[cite: 6, 9]
    int* arr = new int[n];

    std::cout << "Enter " << n << " integers: ";
    // Въвеждане с указателна аритметика без arr[i]
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        std::cin >> *ptr;
    }

    // Двата указателя: left сочи към началото, right сочи към последния елемент[cite: 11, 12]
    int* left = arr;
    int* right = arr + n - 1;

    // Разменяме стойностите на крайните елементи и придвижваме указателите един към друг[cite: 4, 12]
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    // Извеждане на обърнатия масив отново чрез указателна аритметика[cite: 11, 12]
    std::cout << "Reversed array: ";
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    // Правилно освобождаваме динамичната памет и зануляваме указателя
    delete[] arr;
    arr = nullptr;

    return 0;
}