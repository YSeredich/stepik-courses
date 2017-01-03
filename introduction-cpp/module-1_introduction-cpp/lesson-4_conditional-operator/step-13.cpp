#include <iostream>
using namespace std;

int main() {
	int width, height, count;
	cin >> width >> height >> count;
	int s = width * height;

	if (s > count && (count % width == 0 || count % height == 0)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
