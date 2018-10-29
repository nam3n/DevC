#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int n; cin >> n;
	int a[100000];
	For(i,0,n) cin >> a[i];
	int res = 0, count = 1;
	For(i,1,n)
		if (a[i]<a[i-1]) {
			res = max(res, count);
			count = 1;
		} else ++count;
	res = max(res, count);
	cout << res;
}
