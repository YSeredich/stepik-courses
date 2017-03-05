#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> a(n), result;
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] > a[i - 1]) {
			result.push_back(a[i]);
		}
	}
	for (auto now : result) {
    	cout << now << " ";
	}
	
	return 0;
}