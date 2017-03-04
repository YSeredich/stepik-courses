#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x, y, k, money, rub, cent, yearEnd, i = 0;
	double p;
	cin >> p >> x >> y >> k;
	money = x * 100 + y;
	while (i < k) {
		money = money + money * (p / 100);
		i++;
	}
	yearEnd = money;
	rub = yearEnd / 100;
	cent = yearEnd % 100;
	cout << rub << " " << cent;
	return 0;
}