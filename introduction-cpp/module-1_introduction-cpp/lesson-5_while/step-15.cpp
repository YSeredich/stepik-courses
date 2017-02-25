#include <iostream>

using namespace std;

int main() {
	int num, prev, up = false, count = 0;
	cin >> prev;
	cin >> num;
	while (num) {
		if ( num > prev) {
			up = true;
		} else if (num == prev) {
			up = false;
		} else {
			if (up) {
				count++;
			}
			up = false;
		}
		prev = num;
		cin >> num;
	}
	cout << count;
	
	return 0;
}