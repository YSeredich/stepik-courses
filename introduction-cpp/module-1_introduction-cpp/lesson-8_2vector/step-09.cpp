#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, m;
	cin >> n >> m;
	int a[m][n];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        cin >> a[j][i];
	    }
	}
	
	//вывод
	for (int i = 0; i < m; i++) { //перебор строк
	    for (int j = 0; j < n; j++) { //вывод одной строки
	        cout << a[i][j] << " ";
	    }
    	cout << endl; //перевод строки после того, как выведены все элементы
	}

	
	return 0;
}