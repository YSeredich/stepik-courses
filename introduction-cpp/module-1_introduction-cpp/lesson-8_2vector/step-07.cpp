#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n;
	cin >> n;
	int a[n][n];
	bool answer = true;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        cin >> a[i][j];
	    }
	}
	for (int i = 0; i < n; i++) {
	    for (int j = i + 1; j < n; j++) {
	        if ( i != j && a[i][j] != a[j][i]) {
	        	answer = false;
	        }
	    }
	}

	//вывод
	if(answer) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}