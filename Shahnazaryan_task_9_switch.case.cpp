//#include <iostream>
//
//int main() {
//    system("chcp 1251");
//    int choice = -1; 
//
//    while (choice != 0) {
//        std::cout << "Выберите действие:\n 1. Вывод сообщения \n 2. Сумма 2 целых чисел \n 3. Вывести модуль числа \n 0. Выход \n >_: ";
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            std::cout << "Hello, World!\n";
//            break;
//        }
//        case 2: {
//            int num1 = 0;
//            int num2 = 0;
//            std::cout << "Введите 2 целых числа: ";
//            std::cin >> num1 >> num2;
//            std::cout << "Сумма ваших чисел равна: " << num1 + num2 << "\n";
//            break;
//        }
//        case 3: {
//            int num = 0;
//            std::cout << "Введите число: ";
//            std::cin >> num;
//            std::cout << "Модуль вашего числа равен: " << ((num < 0) ? -num : num) << "\n";
//            break;
//        }
//        case 0: {
//            std::cout << "Выход из программы.\n";
//            break;
//        }
//        default: {
//            while (choice > 3)
//            {
//                std::cout << "Ну ты дебил";
//            }
//            std::cout << "Неверный выбор, попробуйте еще раз.\n";
//
//            break;
//        }
//        }
//    }
//
//    return 0;
//}
