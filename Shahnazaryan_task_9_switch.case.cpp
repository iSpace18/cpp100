//#include <iostream>
//
//int main() {
//    system("chcp 1251");
//    int choice = -1; 
//
//    while (choice != 0) {
//        std::cout << "�������� ��������:\n 1. ����� ��������� \n 2. ����� 2 ����� ����� \n 3. ������� ������ ����� \n 0. ����� \n >_: ";
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
//            std::cout << "������� 2 ����� �����: ";
//            std::cin >> num1 >> num2;
//            std::cout << "����� ����� ����� �����: " << num1 + num2 << "\n";
//            break;
//        }
//        case 3: {
//            int num = 0;
//            std::cout << "������� �����: ";
//            std::cin >> num;
//            std::cout << "������ ������ ����� �����: " << ((num < 0) ? -num : num) << "\n";
//            break;
//        }
//        case 0: {
//            std::cout << "����� �� ���������.\n";
//            break;
//        }
//        default: {
//            while (choice > 3)
//            {
//                std::cout << "�� �� �����";
//            }
//            std::cout << "�������� �����, ���������� ��� ���.\n";
//
//            break;
//        }
//        }
//    }
//
//    return 0;
//}
