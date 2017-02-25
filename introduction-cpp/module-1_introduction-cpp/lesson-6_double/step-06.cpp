#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x, y, money, rub, cent, yearEnd;
	double p;
	cin >> p >> x >> y;
	money = x * 100 + y;
	yearEnd = money + money * (p / 100);
	rub = yearEnd / 100;
	cent = yearEnd % 100;
	cout << rub << " " << cent;
	return 0;
}