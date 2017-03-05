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
		if(result.size() == 0) {
			if ((a[i] > 0 && a[i - 1] > 0) || (a[i] < 0 && a[i - 1] < 0)) {
				if(a[i] > a[i - 1]) {
					result.push_back(a[i - 1]);
					result.push_back(a[i]);
				} else {
					result.push_back(a[i]);
					result.push_back(a[i - 1]);
				}
			}
		}
		
	}
	if(result.size() > 0) {
		for (auto now : result) {
    		cout << now << " ";
		}
	}
	
	return 0;
}