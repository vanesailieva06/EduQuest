#include <iostream>

// Функция 1: Обръща реда на цифрите на дадено число
int reverseNumber(int n) {
    int reversed = 0;

    // Въртим цикъла, докато имаме цифри в n
    while (n > 0) {
        int lastDigit = n % 10;               // Вземаме последната цифра
        reversed = reversed * 10 + lastDigit; // Добавяме я към обърнатото число
        n = n / 10;                           // Премахваме последната цифра от n
    }

    return reversed;
}

// Функция 2: Проверява дали дадено число е палиндром
bool isPalindrome(int n) {
    // Отрицателните числа обикновено не са палиндроми заради знака минус (-)
    if (n < 0) {
        return false;
    }

    // УЛОВКА (Предаване по стойност / Pass by Value):
    // Когато подаваме 'n' на reverseNumber, C++ прави КОПИЕ на n.
    // Оригиналната стойност на 'n' в тази функция остава НЕПРОМЕНЕНА!
    int reversed = reverseNumber(n);

    // Числото е палиндром, ако е еднакво с обърнатото си число
    return n == reversed;
}

int main() {
    int number;

    std::cin >> number;

    // Вземаме обърнатото число
    int reversed = reverseNumber(number);
    std::cout << "Reversed number: " << reversed << std::endl;

    // Проверяваме дали е палиндром
    if (isPalindrome(number)) {
        std::cout << "The number " << number << "  palindrome!" << std::endl;
    } else {
        std::cout << "The number " << number << " is NOT palindrome" << std::endl;
    }

    return 0;
}