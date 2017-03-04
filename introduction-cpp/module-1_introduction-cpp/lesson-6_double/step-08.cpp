#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i = 0;
	double num, sum = 0, average;
	cin >> num;
	while (num) {
		sum += num;
		i++;
		cin >> num;
	}
	average = double(sum / i);
	cout << setprecision(6) << fixed;
	cout << average;
	return 0;
}