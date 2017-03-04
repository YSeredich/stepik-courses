#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d , e, f, det, detX, detY;
	cin >> a >> b >> c >> d >> e >> f;
	cout << setprecision(6) << fixed;

	if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
		cout << 5;
	} else {
		det = a * d - b * c;
		detX = e * d - b * f;
		detY = a * f - c * e;
		if (det == 0) {
			if (detX != 0 || detY != 0) {
				cout << 0;
			} else if (a == 0 && b == 0 && c == 0 && d == 0) {
				cout << 0;
			} else if(b == 0 && d == 0) {
				cout << "3 ";
				if (a != 0) {
					cout << e / a;
				} else {
					cout << f / c;
				}
			} else if(a == 0 && c == 0) {
				cout << "4 ";
				if (b != 0) {
					cout << e / b;
				} else {
					cout << f / d;
				}
			} else {
				cout << "1 ";
				if(b != 0) {
					cout << -(a / b) << " " << e / b;
				} else {
					cout << -(c / d) << " " << f / d;
				}
			}
		} else {
			cout << "2 " << detX / det << " " << detY / det;
		}
	}
	
	return 0;
}