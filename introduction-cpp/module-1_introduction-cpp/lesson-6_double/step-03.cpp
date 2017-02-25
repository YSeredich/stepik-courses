#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x;
	cin >> x;
	cout << x - trunc(x) << endl;
	return 0;
}