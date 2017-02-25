#include <iostream>

using namespace std;

int main() {
	int x, sqr = 1, i = 1;
	cin >> x;
	while (sqr <= x) {
		cout << sqr << " ";
		i++;
		sqr = i * i;
	}
	return 0;
}