#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int dx = x1 - x2;
	if (dx < 0) {
		dx = -dx;
	}
	int dy = y1 - y2;
	if (dy < 0) {
		dy = -dy;
	}

	if (dx == 2 && dy == 1 || dx == 1 && dy == 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
