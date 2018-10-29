#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int n; cin >> n;
	int a[100], x;
	For(i,0,n) {
		cin >> x;
		a[x-1] = i+1;
	}
	For(i,0,n) cout << a[i] << ' ';
}
