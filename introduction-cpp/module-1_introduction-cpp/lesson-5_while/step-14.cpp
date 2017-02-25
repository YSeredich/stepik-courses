#include <iostream>

using namespace std;

int main() {
	int num, currentNum = 0, currentCounter = 1, max = 1;
	cin >> num;
	while (num) {
		if ( num == currentNum) {
			currentCounter++;
			if (currentCounter > max) {
				max = currentCounter;
			}
		} else {
			currentCounter = 1;
			currentNum = num;
		}
		cin >> num;
	}
	cout << max;
	
	return 0;
}