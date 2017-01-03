#include <iostream>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	int aout = a * n;
	int bout = b * n;
	aout = aout + bout / 100;
	cout << aout << " " << bout % 100;
	return 0;
}
