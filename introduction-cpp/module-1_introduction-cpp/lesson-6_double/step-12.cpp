#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, x1 , x2, D;
	cin >> a >> b >> c;
	cout << setprecision(6) << fixed;
	if (a == 0 && b == 0 && c == 0) {
		cout << 3;
	} else  if (a == 0 && b != 0) {
		cout << "1 " << -(c / b);
	} else if(a == 0 && b == 0) {
		cout << 0;
	} else {
		D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b + sqrt(D))/(2 * a);
			x2 = (-b - sqrt(D))/(2 * a);
			if (x1 < x2) {
				cout << "2 " << x1 << " " << x2;
			} else {
				cout << "2 " << x2 << " " << x1;
			}
		} else if (D == 0) {
			x1 = (-b)/(2 * a);
			cout << "1 " << x1;
		} else {
			cout << 0;
		}
	}
	
	return 0;
}