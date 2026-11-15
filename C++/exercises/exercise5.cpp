#include <iostream>

int main() {
    // Параметри на Героя
    double heroHealth = 100.0;
    double heroBaseAttack = 15.0;
    double heroDefense = 5.0;
    bool hasPotion = true; // Еднократна отвара

    // Параметри на Чудовището
    double monsterHealth = 120.0;
    double monsterAttack = 12.0;

    int round = 0;

    // Единствен цикъл while - спира при смърт на някого
    while (heroHealth > 0 && monsterHealth > 0) {
        round++;
        std::cout << "\n--- Round " << round << " ---" << std::endl;

        // Въвеждане на критичен множител от играча
        double critMultiplier;
        std::cin >> critMultiplier;

        if (critMultiplier < 1.0) {
            critMultiplier = 1.0; // Защита срещу невалиден вход
        }

        // 1. Атака на Героя
        double actualHeroDamage = heroBaseAttack * critMultiplier;
        monsterHealth -= actualHeroDamage;

        std::cout << "Hero dealt " << actualHeroDamage
                  << " damage. Monster HP: "
                  << monsterHealth << std::endl;
        // Проверка дали чудовището е победено
        if (monsterHealth <= 0) {
            std::cout << "\nVICTORY! The Hero defeated the monster in " << round << " rounds!" << std::endl;
            break; // Излизаме от цикъла
        }

        // 2. Атака на Чудовището (взема под внимание защитата)
        double monsterDamageTaken = monsterAttack - heroDefense;

        heroHealth -= monsterDamageTaken;

        std::cout << "Monster dealt " << monsterDamageTaken
                  << " damage. Hero HP: "
                  << heroHealth << std::endl;

        // 3. Автоматично изпиване на отвара при ниска кръв
        if (heroHealth < 30.0 && heroHealth > 0 && hasPotion) {
            heroHealth += 40.0;
            hasPotion = false;
            std::cout << "[SPECIAL] Hero drank a healing potion! Restored 40 HP. Current HP: "
                      << heroHealth << std::endl;// Отварата е използвана
        }

        // Проверка за загуба
        if (heroHealth <= 0) {
            std::cout << "\nDEFEAT! The Hero was slain on round " << round << "..." << std::endl;
        }
    }

    return 0;
}