#include <iostream>
using namespace std;

int main() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int max = n;
	int min = m;
	if (max < m) {
		max = m;
		min = n;
	}

	int res = x;
	if (y < x) {
		res = y;
	}
	if (min - x < res) {
		res = min - x;
	}
	if (max - y < res) {
		res = max - y;
	}

	return 0;
}
