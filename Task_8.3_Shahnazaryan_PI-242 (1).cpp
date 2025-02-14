#include <iostream>
using namespace std;
int main() {
	system("chcp 1251");
	int sum = 0;

	int num = 0;
	cout << " Введите начальное число: ";
	cin >> num;

	int num2 = 0;
	cout << "Введите конечное число: ";
	cin >> num2;
	cout << "От начального до конечного числа: \n";
	if (num <= num2) {
		for (int i = num; i <= num2; i++) {
			cout << i << "\n";
			sum += i;
		}
	}
	else {
		for (int i = num; i >= num2; i--) {
			cout << i << "\n";
			sum += i;
		}
	}
	cout << "Сумма выведенных чисел: " << sum << endl;
}