#include<iostream>

#include<string>
#include<stdio.h>
using namespace std;
int main(void) {
	int year;
	int month;
	bool flag;
	int days;

	cout << "������һ����ݣ�" << endl;
	cin >> year;
	cout << "������һ���·ݣ�" << endl;
	cin >> month;

	if (year % 400 == 0) {
		flag = true;
	}
	else if ((year % 4 == 0) && (year % 100 != 0)) {
		flag = true;
	}
	else {
		flag = false;

	}

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = flag ? 29 : 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		cout << "�Ƿ��·�" << endl;
		break;

	}
	cout << year << "��" << month << "��" << days << "��" << endl;

	system("pause");
	return 0;

}