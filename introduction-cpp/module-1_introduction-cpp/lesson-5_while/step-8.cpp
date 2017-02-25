#include <iostream>

using namespace std;

int main() {
	int num, sum = 0;
	cin >> num;
	while (num) {
		sum += num;
		cin >> num;
	}
	cout << sum;

	return 0;
}