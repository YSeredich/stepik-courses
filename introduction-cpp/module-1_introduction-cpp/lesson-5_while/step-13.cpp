#include <iostream>

using namespace std;

int main()
{
	int x, i = 1, fn = 1, fn1 = 0, fn2, isFn = -1;
	cin >> x;
	
	while (fn < x) {
		fn2 = fn1;
		fn1 = fn;
		fn = fn1 + fn2;
		i++;
		if (fn == x){
			isFn = i;
		}
	}
	cout << isFn;
	
	
	return 0;
}