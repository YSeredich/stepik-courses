#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << (a - (a / 100) * 100) / 10;
	return 0;
}
