// ProgrammingExercise2Pg646.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "Header1.h"

using namespace std;


int main()
{
	houseType myHouse("Ranch" 2, 4, 3, 2007, 1500, 189000, 2300.0); 

	cout << fixed << showpoint << setprecision(2);

	cout << "My house: " << endl;
	myHouse.print();
	cout << endl;
	
	system("pause");
	return 0;
}

void houseType:: set (string s, int bedroom, int bathroom, int garage, int built, int fs, double pr, double tx,)
{
	style =s;
	numOfBedrooms = bedroom;
	numOfBathrooms = bathroom;
	numOfCarsGarage = garage;
	yearBuilt = built;
	finishedSquareFootage = fs;
	price = pr;
	tax= tx;

}

