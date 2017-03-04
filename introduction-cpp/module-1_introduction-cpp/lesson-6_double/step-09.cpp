#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i = 0;
	double num, sum = 0, sum2 = 0, average, sd;
	cin >> num;
	while (num) {
		sum += num;
		sum2 += num * num;
		i++;
		cin >> num;
	}
	average = sum / i;
	sd = sqrt((sum2 + i * average * average - 2 * sum * average) / (i - 1));

	cout << setprecision(6) << fixed;
	cout << sd;
	return 0;
}