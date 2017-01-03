#include <iostream>
using namespace std;

int main() {
	int hour1, min1, sec1, hour2, min2, sec2;
	cin >> hour1 >> min1 >> sec1 >> hour2 >> min2 >> sec2;
	int time1 = hour1 * 3600 + min1 * 60 + sec1;
	int time2 = hour2 * 3600 + min2 * 60 + sec2;
	cout << time2 - time1;
}
