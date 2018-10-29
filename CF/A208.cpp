#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	string s; cin >> s;
	int i=0, j=0;
	char a[400];
	while (i<s.length()) {
		if (i+2<s.length()&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') {
			if (i<2||s[i-1]!='B'||s[i-2]!='U'||s[i-3]!='W') a[j++] = ' ';
			i+=3;
		} else {
			a[j++] = s[i++];
		}
	}
	For(i,0,j) cout << a[i];
}
