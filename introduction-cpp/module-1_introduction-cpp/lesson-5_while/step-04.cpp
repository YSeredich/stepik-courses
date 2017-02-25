#include <iostream>

using namespace std;

int main() {
	int x, sqr = 1, i = 2;
	cin >> x;
	while (i <= x) {
		if (x % i == 0) {
			cout << i;
			break;
		}
		i++;
	}
	return 0;
}