#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	int other = a + b + c - max;
	if (other > max) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
