#include <iostream>

using namespace std;

int main() {
	int num, prev, count = 0, spaceCount = 0, min = -1;
	bool up = false;
	cin >> prev;
	cin >> num;
	while (num) {
		if ( num >= prev) {
			if (spaceCount) {
				spaceCount++;
			}
			up = num > prev;
		} else {
			if (up) {
				if (spaceCount && (spaceCount < min || min == -1)) {
					min = spaceCount;
				}
				count++;
				spaceCount = 1;
			} else {
				if (spaceCount) {
					spaceCount++;
				}
			}
			up = false;
		}
		prev = num;
		cin >> num;
	}
	if (count < 2) {
		cout << 0 << endl;
	} else {
		cout << min << endl;
	}
	
	return 0;
}
