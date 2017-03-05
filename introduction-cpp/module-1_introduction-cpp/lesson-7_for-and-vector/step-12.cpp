#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	vector <int> a(n), b(n);
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		b[i] = a[i -1];
	}
	b[0] = a[n -1];	
	for (auto now : b) {
    	cout << now << " ";
	}
	
	return 0;
}