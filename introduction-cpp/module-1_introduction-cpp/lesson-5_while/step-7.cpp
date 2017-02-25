#include <iostream>

using namespace std;

int main() {
	int num, i = 0;
	cin >> num;
	while (num) {
		i++;
		cin >> num;
	}
	cout << i;

	return 0;
}