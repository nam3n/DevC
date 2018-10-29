#include<iostream>
using namespace std;
int main() {
	int n, x, y, z, a, b, c;
	cin >> n;
	a = b = c = 0;
	for (int i=0; i<n; ++i) {
		cin >> x >> y >> z;
		a+=x; b+=y; z+=c;
	}
	if (a==0&&b==0&&c==0) cout << "YES";
	else cout << "NO";
	return 0;
}
