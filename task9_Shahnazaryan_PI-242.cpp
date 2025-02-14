#include <iostream>

double processNumber(double num) {
    return (num < 0) ? -num : num; // ���������� ������ �����
}

void calculateModules() {
    double a, b;
    std::cout << "������� ��� ������������ �����: ";
    std::cin >> a >> b;

    double modA = processNumber(a);
    double modB = processNumber(b);
    double sumOfMods = modA + modB;
    double sum = a + b;
    double modSum = processNumber(sum);

    std::cout << "������ ������� �����: " << modA << std::endl;
    std::cout << "������ ������� �����: " << modB << std::endl;
    std::cout << "����� �������: " << sumOfMods << std::endl;
    std::cout << "������ �����: " << modSum << std::endl;
}

void displayMessage() {
    std::cout << "��� ������ ������ ���������." << std::endl;
}

void performAnotherAction() {
    std::cout << "���������� ������� ��������." << std::endl;
}

int main() {
    system("chcp 1251");
    int choice;

    while (true) {
        std::cout << "�������� ��������:\n";
        std::cout << "1. ��������� ������ �����\n";
        std::cout << "2. �������� ���������\n";
        std::cout << "3. ��������� ������ ��������\n";
        std::cout << "4. �����\n";
        std::cout << "������� ����� ������: ";
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
            break; // ����� �� ���������
        }
        else {
            std::cout << "�������� �����, ���������� ��� ���." << std::endl;
        }
    }

    return 0;
}
