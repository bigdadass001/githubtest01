#include<iostream>

#include<string>
#include<stdio.h>
using namespace std;
int main(void) {
	int year;
	int month;
	bool flag;
	int days;

	cout << "请输入一个年份：" << endl;
	cin >> year;
	cout << "请输入一个月份：" << endl;
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
		cout << "非法月份" << endl;
		break;

	}
	cout << year << "年" << month << "月" << days << "天" << endl;

	system("pause");
	return 0;

}