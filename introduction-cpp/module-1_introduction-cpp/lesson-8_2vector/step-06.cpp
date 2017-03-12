#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, m, ch1, ch2, temp;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        cin >> a[i][j];
	    }
	}
	cin >> ch1 >> ch2;
	for (int i = 0; i < n; i++) {
	       temp = a[i][ch1];
	       a[i][ch1] = a[i][ch2];
	       a[i][ch2] = temp;
	}


	//вывод
	//вывод
	for (int i = 0; i < n; i++) { //перебор строк
	    for (int j = 0; j < m; j++) { //вывод одной строки
	        cout << a[i][j] << " ";
	    }
	    cout << endl; //перевод строки после того, как выведены все элементы
	}
	
	return 0;
}