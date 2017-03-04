#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int n, i = 0;
	double x, a, res;
	cin >> n >> x;
	cin >> res;
	while (i < n) {
		cin >> a;
		res = res * x + a;
		i++;
	}
	
	cout << setprecision(6) << fixed;
	cout << res;
	return 0;
}