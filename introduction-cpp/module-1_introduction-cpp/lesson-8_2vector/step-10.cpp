#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// чтение 
	int n, m, k, result = 0, empty = 0;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        cin >> a[i][j];
	    }
	}
	cin >> k;
	//обработка
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	    	// проверяем найдены ли места, чтобы не проходить лишний раз по рядам
	        if(!result) {
	        	//проверяем свободно ли место
	        	if (a[i][j] == 0) {
	        		// если да, то проверяем недостаточно ли уже свободных мест
	        		if(empty) {
	        			empty += 1;
	        			if (empty == k) {
	        				result = i + 1;
	        			}
	        		} else {
	        			empty = 1;
	        			if (k == 1) result = 1;
	        		}
	        	} else {
	        		//если нет, то обнуляем пустые места
	        		empty = 0;
	        	}
	        }
	    }
	    empty = 0;
	}
	
	//вывод
	cout << result;
	
	return 0;
}