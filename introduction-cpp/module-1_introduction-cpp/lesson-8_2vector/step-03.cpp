#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, m, max = 0, nmax = 0, mmax = 0;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        cin >> a[i][j];
	        if (i == 0 && j == 0) {
	        	max = a[0][0];
	        }
	        if(a[i][j] > max) {
	        	max = a[i][j];
	        	nmax = i;
	        	mmax = j;
	        }
	    }
	}

	//вывод
	cout << nmax << " " << mmax;
	
	return 0;
}