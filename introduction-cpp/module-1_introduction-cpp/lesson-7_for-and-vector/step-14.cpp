#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int n;
	bool repeat;
	cin >> n;
	vector <int> a(n), result;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		repeat = false;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if(a[i] == a[j]) repeat = true;
		}
		if(!repeat) result.push_back(a[i]);
	}

    for (auto now : result) {
    		cout << now << " ";
		}
	
	return 0;
}