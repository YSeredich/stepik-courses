#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (i % 2 == 0) {
			a.push_back(temp);
		}
	}
	for (auto now : a) {
    	cout << now << " ";
	}
	
	return 0;
}