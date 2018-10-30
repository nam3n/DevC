#include<iostream>
using namespace std;

bool choose[100];

void writeSubset(int n){
	cout << "[ ";
	for(int i=0; i<n; ++i)
		if(choose[i]) cout << i+1 << " ";
	cout << "]\n";
}

void subset(int i, int n){
	if(i == n){
		writeSubset(n);
		return;
	}
	subset(i+1, n);
	choose[i] = true;
	subset(i+1, n);
	choose[i] = false;
}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) choose[i] = false;
	subset(0, n);
}

