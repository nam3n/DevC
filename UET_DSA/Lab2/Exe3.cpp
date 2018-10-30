#include <iostream>
#include <algorithm>

using namespace std;

void recur(int a[], int i, int j){
	if(i < j){
		swap(a[i], a[j]);
		recur(a, i+1, j-1);
	}
}

int main(){
	int n, b, e;
	int a[100];
	cin >> n >> b >> e;
	for(int i=0; i<n; ++i) cin >> a[i];
	recur(a, b, e);
	for(int i=0; i<n; ++i) cout << a[i] << " ";
}
