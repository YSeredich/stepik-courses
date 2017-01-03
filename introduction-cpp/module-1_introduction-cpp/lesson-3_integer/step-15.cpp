#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int first = num / 100;
	int second = num % 100;
	int secondReversed = (second % 10) * 10 + second / 10;
	cout << first - secondReversed + 1;
}
