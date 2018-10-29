#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int n, m;
	cin >> n >> m;
	if (min(n, m)%2==1) cout << "Akshat";
	else cout << "Malvika";
}
