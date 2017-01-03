#include <iostream>
using namespace std;

int main() {
	int n = 10, k;
	cin >> k;
	cout << k - (k / n) * n;
	return 0;
}
