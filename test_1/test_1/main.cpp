#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<MMsystem.h>
#include<string>
#include<stdio.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int main(void) {
	int year;
	int month;
	cout << "��������ݣ�";
	cin >> year;
	cout << "�������·�";
	cin >> month;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		cout << "���·���31��" << endl;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		cout << "���·���30��" << endl;
	}
	else if (month == 2 && (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)) {
		cout << "���·���29��" << endl;
	}
	else if (month == 2) {
		cout << "���·���28��" << endl;
	}
	else {
		cout << "�·����벻��ȷ" << endl;
	}
	return 0;
}