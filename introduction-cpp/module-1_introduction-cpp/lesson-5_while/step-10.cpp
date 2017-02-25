#include <iostream>

using namespace std;

int main() {
	int num, max = 0, count = 0;
	cin >> num;
	while (num) {
		if (num > max) {
			max = num;
			count = 1;
		}
		else if (num == max) {
			count++;
		}
		cin >> num;
	}
	cout << count;

	return 0;
}