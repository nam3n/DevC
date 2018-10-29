#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	long long n, k;
	cin >> n >> k;
	long long odd = (n-1)/2 + 1;
	if (k<=odd) cout << k*2 - 1;
	else cout << (k-odd)*2;
}
