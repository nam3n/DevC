#include<iostream>
using namespace std;

int product(int m, int n) {
	if (n==0) return 0;
	return m + product(m, n-1);
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << product(m,n);
}
