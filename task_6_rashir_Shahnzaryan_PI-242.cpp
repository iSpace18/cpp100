//#include <iostream> 
//using namespace std;
//int main() {
//	system("chcp 1251");
//	int num = 0;
//	cout << "Введите количество чисел: ";
//	cin >> num;
//	int num2 = 0;
//	int min, max;
//	cout << "Введите 1 число: ";
//	cin >> num2;
//	min = max = num2;
//	for (int i = 1; i < num; ++i)
//	{
//		cout << "Введите число " << (i + 1) << ": ";
//		cin >> num2;
//		if (num2 < min) min = num2;
//		if (num2 > max) max = num2;
//	}
//	int diff = max - min;
//	cout << "Наименьшее число: " << min << endl;
//	cout << "Наибольшее число: " << max << endl;
//	cout << "Разница:" << diff << endl;
//	return 0;
//}