#include <iostream>

// Функция, която проверява дали едно число е просто
bool isPrime(int n) {
    // УЛОВКА: Числата, по-малки или равни на 1 (вкл. отрицателни, 0 и 1), НЕ са прости.
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        // Ако n се дели на i без остатък, то НЕ е просто число
        if (n % i == 0) {
            return false; // Ранен изход от функцията
        }
    }

    // Ако не сме намерили нито един делител, числото е просто
    return true;
}

int main() {
    int number;

    std::cin >> number;

    // Извикване на функцията isPrime в условен оператор (if)
    if (isPrime(number)) {
        std::cout << "The number " << number << " is prime." << std::endl;
    } else {
        std::cout << "The number " << number << " is NOT prime" << std::endl;
    }

    return 0;
}