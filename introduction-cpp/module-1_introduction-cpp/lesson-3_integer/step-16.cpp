#include <iostream>
using namespace std;

int main() {
	int h, up, down;
	cin >> h >> up >> down;
	int v = up - down;
	cout << (h - up + v - 1)/ v + 1;
}
