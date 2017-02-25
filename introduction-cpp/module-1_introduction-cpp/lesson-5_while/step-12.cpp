#include <iostream>

using namespace std;

int main()
{
	int n, i = 2, fn = 1, fn1 = 0, fn2;
	cin >> n;
	if (n == 0) {
		cout << 0;
	} else if (n == 1) {
		cout << 1;
	} else {
		while (i <= n) {
			fn2 = fn1;
			fn1 = fn;
			fn = fn1 + fn2;
			i++;
		}
		cout << fn;
	}
	
	return 0;
}