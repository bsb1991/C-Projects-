// ConsoleApplication293.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
#include "dateType.h"

using namespace std;

int main()
{
	dateType date1(3, 15, 2008);
	dateType date2(15, 20, 2008);
	dateType date3(2, 30, 2009);
	dateType date4;

	int m, d, y;

	cout << "Date 1: ";
	date1.printDate();
	cout << endl;

	cout << "Date 2: ";
	date2.printDate();
	cout << endl;

	cout << "Date 3: ";
	date3.printDate();
	cout << endl;

	cout << "Enter month day year: ";
	cin >> m >> d >> y;
	cout << endl;

	date4.setDate(m, d, y);

	cout << "Date 4: ";
	date4.printDate();
	cout << endl;
	system("pause");
	return 0;

}