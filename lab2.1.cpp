// Lab2.1.cpp
// Янішевський Тарас
// Лабораторна робота No 2.1
// Лінійні програми.
// Варіант 32
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі

	double α; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "α = "; cin >> α;
	z1 = ((sin(4*α)))/(1+cos(4*α))*(cos(2*α)/(1+cos(2*α)));
	z2 = 1/tan((3./2 * (Pi))- α);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}