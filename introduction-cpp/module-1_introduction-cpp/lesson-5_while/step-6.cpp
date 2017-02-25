#include <iostream>

using namespace std;

int main() {
	int x, sqr = 1, i = 0, answer = false;
	cin >> x;
	while (sqr <= x) {
		if (sqr == x) {
			answer = true;
		}
		i++;
		sqr = sqr * 2;
	}
	if (answer) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}