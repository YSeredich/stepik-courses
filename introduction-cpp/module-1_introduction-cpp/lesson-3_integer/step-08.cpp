#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b = a - (a / 100) * 100;
	int c = b - (b / 10) * 10;
	cout << a / 100 + b / 10 + c;
	return 0;
}
