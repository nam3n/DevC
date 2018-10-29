#include <fstream>

using namespace std;

ifstream cin("EXX1.IN");
ofstream cout("EXX1.OUT");

void readInput(int &n, int a[]){
	cin >> n;
	for (int i=0; i<n; ++i) cin >> a[i];
}

void writeOutput(int n, int a[]){
	for (int i=0; i<n; ++i) cout << a[i] << " ";
}

void bubbleSort(int n, int a[]){
	bool swaped = true;
	while (swaped){
		swaped = false;
		for (int i=0; i<n-1; ++i)
			if(a[i]<a[i+1]){
				swap(a[i], a[i+1]);
				swaped = true;
			} 
	}
}

int main(){
	int n;
	int a[100];
	readInput(n, a);
	bubbleSort(n, a);
	writeOutput(n, a);
}
