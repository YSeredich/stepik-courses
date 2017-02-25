#include <iostream>

using namespace std;

int main() {
	int num, max;
	cin >> num;
	max = num;
	while (num) {
		if (num > max) {
			max = num;
		}
		cin >> num;
	}
	cout << max;

	return 0;
}