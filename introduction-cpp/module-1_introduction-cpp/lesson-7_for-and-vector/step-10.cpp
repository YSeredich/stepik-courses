#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, result = 1;
	cin >> n;
	vector <int> a(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] != a[i - 1]) {
			result++;
		}
	}
	cout << result;
	
	return 0;
}