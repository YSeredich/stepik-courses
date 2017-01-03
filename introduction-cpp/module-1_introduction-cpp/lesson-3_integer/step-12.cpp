#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int hour = (a % (3600 * 24)) / 3600;
	int min = (a % 3600) / 60;
	int sec = (a % 3600) % 60;
	cout << hour << ":" << min / 10 << min % 10 << ":" << sec / 10 << sec % 10;
	return 0;
}
