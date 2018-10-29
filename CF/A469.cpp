#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int n, a[100]; 
	cin >> n;
	For(i,1,n+1) a[i]=0;
	int p, x;
	cin >> p;
	For(i,0,p) {
		cin >> x;
		a[x]=1;
	}
	cin >> p;
	For(i,0,p) {
		cin >> x;
		a[x]=1;
	}
	For(i,1,n+1)
		if (a[i]==0) {
			cout << "Oh, my keyboard!";
			return 0;
		}
	cout << "I become the guy.";
}
