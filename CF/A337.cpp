#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int n,m;
	cin >> n >> m;
	int a[50];
	for (int i=0; i<m; ++i) cin >> a[i];
	for (int i=0; i<m; ++i)
		for (int j=i+1; j<m; ++j)
			if (a[j]<a[i]) swap(a[i],a[j]);
	int res = 1001;
	for (int i=n-1; i<m; ++i) {
		res = min(res, a[i] - a[i-n+1]);
	}
	cout << res;
}
