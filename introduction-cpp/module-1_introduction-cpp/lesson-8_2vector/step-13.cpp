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
	for (int j = 0; j < m + n; j++) {
	    for (int i = 0; i < n; i++) {
	    	if (j - i >= 0 && j - i < m) {
	    		a[i][j - i] = count++;
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