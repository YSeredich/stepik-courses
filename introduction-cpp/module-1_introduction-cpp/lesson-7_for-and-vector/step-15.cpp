#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	bool is_beat = false;
	vector <int> x(8), y(8);
	for (int i = 0; i < 8; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if(x[i] == x[j] 
				|| y[i] == y[j] 
				|| (abs(y[i] - y[j]) == abs(x[i] - x[j]))) {
					is_beat = true;
			}
		}
	}

	if(is_beat) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}