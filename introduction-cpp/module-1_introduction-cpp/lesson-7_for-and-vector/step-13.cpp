#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, result = 0;
	cin >> n;
	vector <int> a(n), b(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) result++;
		}
	}
    cout << result;
	
	return 0;
}