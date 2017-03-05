#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, temp, pos = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp > 0) {
			pos++;
		}
	}
	cout << pos;
	
	return 0;
}