//#include <iostream>
//
//void countFrom0To10() {
//    std::cout << "������� �� 0 �� 10:" << std::endl;
//    for (int i = 0; i <= 10; ++i) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void countFromMinus10To10() {
//    std::cout << "������� �� -10 �� 10:" << std::endl;
//    for (int i = -10; i <= 10; ++i) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void countFrom15ToMinus25() {
//    std::cout << "������� �� 15 �� -25:" << std::endl;
//    for (int i = 15; i >= -25; --i) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void countFrom0To100WithStep15() {
//    std::cout << "������� �� 0 �� 100 � ����� 15:" << std::endl;
//    for (int i = 0; i <= 100; i += 15) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void countFromUserTo100(int start) {
//    std::cout << "������� �� " << start << " �� 100:" << std::endl;
//    for (int i = start; i <= 100; ++i) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//}
//
//void countFromUserToUser(int start, int end) {
//    if (start <= end) {
//        std::cout << "������� �� " << start << " �� " << end << ":" << std::endl;
//        for (int i = start; i <= end; ++i) {
//            std::cout << i << " ";
//        }
//    }
//    else {
//        std::cout << "������� �� " << start << " �� " << end << ":" << std::endl;
//        for (int i = start; i >= end; --i) {
//            std::cout << i << " ";
//        }
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//
//    countFrom0To10();
//    countFromMinus10To10();
//    countFrom15ToMinus25();
//    countFrom0To100WithStep15();
//
//    int userInput1, userInput2;
//
//    std::cout << "������� ����� ��� �������� �� ������������ �� 100: ";
//    std::cin >> userInput1;
//    countFromUserTo100(userInput1);
//
//    std::cout << "������� ��� ����� ��� �������� �� ������� �� �������: ";
//    std::cin >> userInput1 >> userInput2;
//    countFromUserToUser(userInput1, userInput2);
//
//    return 0;
//}
