#include <fstream>
#include <utility>

using namespace std;

ifstream cin("EXX2.IN");
ofstream cout("EXX2.OUT");

void readInput(int &n, int a[]){
	cin >> n;
	for (int i=0; i<n; ++i) cin >> a[i];
}

void writeOutput(int n, int a[]){
	for (int i=0; i<n; ++i) cout << a[i] << " ";
}

void insertionSort(int n, int a[]){
	for (int i=0; i<n; ++i){
		int j = i;
		while ((j>0)&&(a[j-1]>a[j])){
			swap(a[j-1], a[j]);
			--j;
		}
	}
}

int main(){
	int n;
	int a[100];
	readInput(n, a);
	insertionSort(n, a);
	writeOutput(n, a);
}
