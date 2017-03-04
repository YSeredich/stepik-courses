#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, x1 , x2, D;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	cout << setprecision(6) << fixed;
	if (D > 0) {
		x1 = (-b + sqrt(D))/(2 * a);
		x2 = (-b - sqrt(D))/(2 * a);
		if (x1 < x2) {
			cout << x1 << " " << x2;
		} else {
			cout << x2 << " " << x1;
		}
		
	} else if (D == 0) {
		x1 = (-b)/(2 * a);
		cout << x1;
	}
	return 0;
}