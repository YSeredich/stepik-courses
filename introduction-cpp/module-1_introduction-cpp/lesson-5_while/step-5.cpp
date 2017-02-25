#include <iostream>

using namespace std;

int main() {
	int x, sqr = 1, i = 0;
	cin >> x;
	while (sqr <= x) {
		cout << sqr << " ";
		i++;
		sqr = sqr * 2;
	}
	return 0;
}