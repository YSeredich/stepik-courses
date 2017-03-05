#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, result = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] % 2 != 0 && (a[i] < result || result == 0)) {
			result = a[i];
		}
	}
	cout << result;
	
	return 0;
}