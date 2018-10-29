#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	long long n; cin >> n;
	if (n%2) cout << -(n+1)/2;
	else cout << n/2;
}
