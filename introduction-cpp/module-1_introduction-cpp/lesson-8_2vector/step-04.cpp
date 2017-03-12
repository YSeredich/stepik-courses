#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n;
	cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        if (i == (n) / 2
	        	|| j == (n) / 2
	        	|| j == i
	        	|| i == n - j - 1) {
	        	a[i][j] = '*';
	        } else {
	        	a[i][j] = '.';
	        }
	    }
	}

	//вывод
	for (int i = 0; i < n; i++) { //перебор строк
	    for (int j = 0; j < n; j++) { //вывод одной строки
	        cout << a[i][j] << " ";
	    }
    	cout << endl; //перевод строки после того, как выведены все элементы
	}
	
	return 0;
}