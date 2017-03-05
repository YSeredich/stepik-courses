#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, k, from, to;
	cin >> n >> k;
	vector <char> stay(n);
	for (int i = 1; i < n + 1; i++) {
		stay[i] = 'I';
	}
	for (int i = 0; i < k; i++) {
		cin >> from >> to;
		for (int j = from; j < to + 1; j++) {
			stay[j] = '.';
		}
	}	
	for (int i = 1; i < n + 1; i++) {
		cout << stay[i];
	}	

	return 0;
}