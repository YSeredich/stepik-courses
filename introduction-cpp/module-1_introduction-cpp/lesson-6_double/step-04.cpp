#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x;
	cin >> x;
	cout << trunc((x - trunc(x)) * 10) << endl;
	return 0;
}