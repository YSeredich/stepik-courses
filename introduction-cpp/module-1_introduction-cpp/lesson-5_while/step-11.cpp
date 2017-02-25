#include <iostream>

using namespace std;

int main()
{
	int num, max, second;
	cin >> max;
	cin >> num;
	if (num > max) {
		second = max;
		max = num;
	} else {
		second = num;
	}
	cin >> num;
	while (num) {
		if (num > max) {
			second = max;
			max = num;
		} else if (num == max || num > second) {
			second = num;
		}
		cin >> num;
	}
	cout << second;
	return 0;
}