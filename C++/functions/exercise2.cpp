#include <iostream>
#include <algorithm> // За std::swap

// Функция за изчисляване на сумата на нечетните числа в диапазона [start, end]
int sumOddInRange(int start, int end) {
    int sum = 0;

    // Обхождаме всички числа от start до end включително
    for (int i = start; i <= end; i++) {
        // Проверяваме дали числото е нечетно (деленето на 2 дава остатък различен от 0)
        if (i % 2 != 0) {
            sum += i; // Добавяме го към сумата
        }
    }

    return sum; // Връщаме крайния резултат
}

int main() {
    int num1, num2;

    std::cin >> num1 >> num2;

    // Извикваме функцията и записваме резултата в променлива
    int result = sumOddInRange(num1, num2);

    std::cout << "The sum of the odd number is: " << result << std::endl;

    return 0;
}