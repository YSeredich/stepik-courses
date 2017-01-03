#include <iostream>
using namespace std;

int main() {
	int a1, b1, c1, a2, b2, c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	int max1 = a1;
	int min1 = a1;
	if (b1 > max1) {
		max1 = b1;
	}
	if (c1 > max1) {
		max1 = c1;
	}
	if (b1 < min1) {
		min1 = b1;
	}
	if (c1 < min1) {
		min1 = c1;
	}
	int mid1 = a1 + b1 + c1 - min1 - max1;

	int max2 = a2;
	int min2 = a2;
	if (b2 > max2) {
		max2 = b2;
	}
	if (c2 > max2) {
		max2 = c2;
	}
	if (b2 < min2) {
		min2 = b2;
	}
	if (c2 < min2) {
		min2 = c2;
	}
	int mid2 = a2 + b2 + c2 - min2 - max2;

	if (min1 == min2 && mid1 == mid2 && max1 == max2) {
		cout << "Boxes are equal";
	}
	else if (min1 <= min2 && mid1 <= mid2 && max1 <= max2) {
		cout << "The first box is smaller than the second one";
	}
	else if (min1 >= min2 && mid1 >= mid2 && max1 >= max2) {
		cout << "The first box is larger than the second one";
	}
	else {
		cout << "Boxes are incomparable";
	}

	return 0;
}
