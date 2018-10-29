#include<iostream>
#include<algorithm>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if (a==1&&c==1) cout << a+b+c;
	else if (b==1||a==1||c==1) cout << max((a+b)*c, a*(b+c));
	else cout << a*b*c;
}
