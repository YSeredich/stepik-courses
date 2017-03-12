#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, m, count = 1;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        a[i][j] = 0;
	    }
	}
	int i = 0, j = 0;
	char nav = 'R';
	while (count < n * m + 1) {
		a[i][j] = count++;
		if (nav == 'R') {
			if (j + 1 == m || a[i][j + 1] != 0) {
				nav = 'B';
				i++;
			} else {
				j++;
			}
		} else if (nav == 'B') {
			if (i + 1 == n || a[i + 1][j] != 0) {
				nav = 'L';
				j--;
			} else {
				i++;
			}
		} else if (nav == 'L') {
			if (j == 0 || a[i][j - 1] != 0) {
				nav = 'T';
				i--;
			} else {
				j--;
			}
		} else if (nav == 'T') {
			if (i == 0 || a[i - 1][j] != 0) {
				nav = 'R';
				j++;
			} else {
				i--;
			}
		}
	}
	
	//вывод
	for (int i = 0; i < n; i++) { //перебор строк
	    for (int j = 0; j < m; j++) { //вывод одной строки
	    	if (a[i][j] < 10) {
	    		cout << "   " << a[i][j];
	    	} else if(a[i][j] < 100) {
	    		cout << "  " << a[i][j];
	    	} else if (a[i][j] < 1000) {
	    		cout << " " << a[i][j];
	    	} else {
	    		cout << a[i][j];
	    	}
	        
	    }
    	cout << endl; //перевод строки после того, как выведены все элементы
	}


	return 0;
}