#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d , e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	cout << setprecision(6) << fixed;
	if (a == 0) {
		y = e / b;
		x = (f - d*y)/c;
	} else {
		y = (a*f - c*e)/(a*d -b*c);
		x = (e - b*y)/a;
	}

	cout << x << " " << y;
	
	return 0;
}