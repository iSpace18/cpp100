//#include <iostream>
//using namespace std;
//int main() {
//	system("chcp 1251");
//	cout << "Выберите действие: " << endl;
//	cout << "1 - Рассчет по формуле" << endl;
//	cout << "2 - Сумма чисел и их количество ДО ввода отрицательного числа" << endl;
//	cout << "3 - Вывод минимального, максимального и разности чисел" << endl;
//	int user_num = 0;
//	cout << "Для выбора укажите число от 1 до 3" << endl;
//	cin >> user_num;
//	if (user_num == 1)
//	{
//			float x = 0;
//		cout << "Введите x: ";
//		cin >> x;
//		float t = 0;
//		cout << "Введите t: ";
//		cin >> t;
//		float g = 0;
//		cout << "Введите g: ";
//		cin >> g;
//		float k = (x / 2 + 3 * t - 2 * g) - t * t;
//		cout << k;
//	}
//	if (user_num == 2)
//	{
//		    int number;
//    int sum = 0;  
//    int count = 0;
//
//    cout << "Введите числа (для завершения введите отрицательное число):" << endl;
//
//    while (true) {
//        cin >> number;
//
//        if (number < 0) {
//            break;
//        }
//
//        sum += number; 
//        count++;  
//    }
//
//    cout << "Сумма введенных чисел: " << sum << endl;
//    cout << "Количество введенных чисел: " << count << endl;
//
//	}
//	if (user_num == 3)
//	{
//			int num = 0;
//		cout << "Введите количество чисел: ";
//		cin >> num;
//		int num2 = 0;
//		int min, max;
//		cout << "Введите 1 число: ";
//		cin >> num2;
//		min = max = num2;
//		for (int i = 1; i < num; ++i)
//		{
//			cout << "Введите число " << (i + 1) << ": ";
//			cin >> num2;
//			if (num2 < min) min = num2;
//			if (num2 > max) max = num2;
//		}
//		int diff = max - min;
//		cout << "Наименьшее число: " << min << endl;
//		cout << "Наибольшее число: " << max << endl;
//		cout << "Разница:" << diff << endl;
//	}
//	if (user_num > 3)
//	{
//		cout << "Неккоректное число";
//	}
//	return 0;
//}