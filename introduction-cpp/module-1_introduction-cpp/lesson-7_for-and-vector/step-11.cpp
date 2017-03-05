#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	vector <int> a(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (i % 2 == 1) {
			temp = a[i - 1];
			a[i - 1] = a[i];
			a[i] = temp;
		}
	}
	
	for (auto now : a) {
    	cout << now << " ";
	}
	
	return 0;
}