#include<iostream>
using namespace std;

int main() {
	int n, sum=0;
	cin >> n;
	int a[100];
	for (int i=0; i<n; ++i) {
		cin >> a[i];
		sum+=a[i];
	}
	for (int i=0; i<n; ++i)
		for (int j=i+1; j<n; ++j)
			if (a[j]>a[i]) swap(a[i], a[j]);
	int myMo = 0, res;
	for (res=0; res<n; ++res) {
		myMo+=a[res];
		if (myMo*2 > sum) {
			break;
		}
	}
	cout << res+1;
	return 0;
}
