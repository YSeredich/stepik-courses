#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int dx = x1 - x2;
	int dy = y1 - y2;
	if (dx >= -1 && dx <= 1 && dy >= -1 && dy <= 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}