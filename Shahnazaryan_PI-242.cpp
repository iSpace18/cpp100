//#include <iostream>
//using namespace std;
//int main() {
//	system("chcp 1251");
//	cout << "�������� ��������: " << endl;
//	cout << "1 - ������� �� �������" << endl;
//	cout << "2 - ����� ����� � �� ���������� �� ����� �������������� �����" << endl;
//	cout << "3 - ����� ������������, ������������� � �������� �����" << endl;
//	int user_num = 0;
//	cout << "��� ������ ������� ����� �� 1 �� 3" << endl;
//	cin >> user_num;
//	if (user_num == 1)
//	{
//			float x = 0;
//		cout << "������� x: ";
//		cin >> x;
//		float t = 0;
//		cout << "������� t: ";
//		cin >> t;
//		float g = 0;
//		cout << "������� g: ";
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
//    cout << "������� ����� (��� ���������� ������� ������������� �����):" << endl;
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
//    cout << "����� ��������� �����: " << sum << endl;
//    cout << "���������� ��������� �����: " << count << endl;
//
//	}
//	if (user_num == 3)
//	{
//			int num = 0;
//		cout << "������� ���������� �����: ";
//		cin >> num;
//		int num2 = 0;
//		int min, max;
//		cout << "������� 1 �����: ";
//		cin >> num2;
//		min = max = num2;
//		for (int i = 1; i < num; ++i)
//		{
//			cout << "������� ����� " << (i + 1) << ": ";
//			cin >> num2;
//			if (num2 < min) min = num2;
//			if (num2 > max) max = num2;
//		}
//		int diff = max - min;
//		cout << "���������� �����: " << min << endl;
//		cout << "���������� �����: " << max << endl;
//		cout << "�������:" << diff << endl;
//	}
//	if (user_num > 3)
//	{
//		cout << "������������ �����";
//	}
//	return 0;
//}