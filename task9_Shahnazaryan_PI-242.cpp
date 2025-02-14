#include <iostream>

double processNumber(double num) {
    return (num < 0) ? -num : num; // Возвращает модуль числа
}

void calculateModules() {
    double a, b;
    std::cout << "Введите два вещественных числа: ";
    std::cin >> a >> b;

    double modA = processNumber(a);
    double modB = processNumber(b);
    double sumOfMods = modA + modB;
    double sum = a + b;
    double modSum = processNumber(sum);

    std::cout << "Модуль первого числа: " << modA << std::endl;
    std::cout << "Модуль второго числа: " << modB << std::endl;
    std::cout << "Сумма модулей: " << sumOfMods << std::endl;
    std::cout << "Модуль суммы: " << modSum << std::endl;
}

void displayMessage() {
    std::cout << "Это пример вывода сообщения." << std::endl;
}

void performAnotherAction() {
    std::cout << "Выполнение другого действия." << std::endl;
}

int main() {
    system("chcp 1251");
    int choice;

    while (true) {
        std::cout << "Выберите действие:\n";
        std::cout << "1. Вычислить модули чисел\n";
        std::cout << "2. Показать сообщение\n";
        std::cout << "3. Выполнить другое действие\n";
        std::cout << "4. Выход\n";
        std::cout << "Введите номер пункта: ";
        std::cin >> choice;

        if (choice == 1) {
            calculateModules();
        }
        else if (choice == 2) {
            displayMessage();
        }
        else if (choice == 3) {
            performAnotherAction();
        }
        else if (choice == 4) {
            break; // Выход из программы
        }
        else {
            std::cout << "Неверный выбор, попробуйте еще раз." << std::endl;
        }
    }

    return 0;
}
