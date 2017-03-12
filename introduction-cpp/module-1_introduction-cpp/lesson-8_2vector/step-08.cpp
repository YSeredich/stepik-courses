#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, k;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cin >> a[i][j];
	    }
	}
	cin >> k;
	if (k >= 0) {
		for (int j = 0; j < n - k; j++) {
	        cout << a[k + j][j] << " ";
	    }
	} else {
		for (int i = 0; i < n + k; i++) {
			cout << a[i][i - k] << " ";
		}
	}

	
	return 0;
}