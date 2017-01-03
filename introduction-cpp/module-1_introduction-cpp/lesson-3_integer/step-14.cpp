#include <iostream>
using namespace std;

int main() {
	int v, t, sKAD = 109;
	cin >> v >> t;
	int s = v * t;
	cout << (s % sKAD + sKAD) % sKAD;
}
