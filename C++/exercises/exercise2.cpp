#include <iostream>

int main() {
    char serviceType;
    double weight;

    std::cin >> serviceType;

    std::cin >> weight;

    // Проверка за невалидно тегло
    if (weight <= 0) {
        std::cout << "The weight should be more than 0" << std::endl;
        return 1;
    }

    double basePrice = 0.0;
    double pricePerKg = 0.0;
    bool isValidService = true;

    // Определяне на базисната цена и цената на килограм според услугата
    switch (serviceType) {
        case 'S':
            basePrice = 2.50;
            pricePerKg = 0.50;
            break;

        case 'E':
            basePrice = 5.00;
            pricePerKg = 1.20;
            break;

        case 'V':
            basePrice = 10.00;
            pricePerKg = 2.00;
            break;

        default:
            isValidService = false;
            break;
    }

    // Ако е въведен невалиден код за услуга
    if (!isValidService) {
        std::cout << "Invalid service!" << std::endl;
        return 1;
    }

    // Изчисление на основната цена
    double totalPrice = basePrice + (weight * pricePerKg);

    // Добавяне на такса за тежък товар (над 10 кг)
    if (weight > 10.0) {
        totalPrice += 5.00;
    }

    // Отпечатване на резултата
    std::cout << "Total price: " << totalPrice << std::endl;

    return 0;
}