#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	string s, t;
	cin >> s >> t;
	int res[100];
	For(i,0,s.length())
		if (s[i]==t[i]) cout << 0; else cout << 1;
}
