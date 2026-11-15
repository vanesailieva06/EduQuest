#include <iostream>

int main() {
    // Декларираме масив с фиксиран максимален размер 10 (без динамична памет)
    int numbers[10]; 
    int n;

    // Потребителят въвежда желания брой елементи
    std::cout << "Enter number of elements (up to 10):";
    std::cin >> n;

    // Проверка за валидност на n
    if (n > 10 || n <= 0) {
        std::cout << "Invalid number of elements!" << std::endl;
        return 1;
    }

    // Въвеждане на n елемента
    std::cout << "Enter " << n << " numbers:";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    // Предполагаме, че първият елемент е най-голям
    int maxElement = numbers[0];
    int maxIndex = 0;

    // Търсене на най-голямото число и неговия индекс
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
            maxIndex = i;
        }
    }

    // Извеждане на резултата
    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Found at index: " << maxIndex << std::endl;

    return 0;
}