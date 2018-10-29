#include<iostream>
using namespace std;

void printSubset(int i, int n, boolean firstChoose) {
	if (i==n+1) {
		cout << "]\n[";
		return;
	}
		
	if (i==1) cout << "[";
	printSubset(i+1, n);
	cout << i;
	if (i!=n) cout << ",";
	printSubset(i+1, n);
}

int main() {
	int n;
	cin >> n;
	printSubset(1, n, 0);
}
