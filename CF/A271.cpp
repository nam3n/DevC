#include<iostream>
#include<algorithm>
using namespace std;

bool distinctDigits(int y) {
	int a[4];
	for (int i=0; i<4; ++i) {
		a[i] = y % 10;
		y /= 10;
	}
	for (int i=0; i<4; ++i)
		for (int j=i+1; j<4; ++j)
			if (a[i]==a[j]) return 0;
	return 1;
}

int main() {
	int y;
	cin >> y;
	for (;;) if (distinctDigits(++y)) break;
	cout << y;
}
