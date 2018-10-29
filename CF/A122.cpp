#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int luckyNum[] = {
		4, 7, 44, 47, 74, 77, 
		444, 447, 474, 477,
		744, 747, 774, 777
	};
	int sizeArr = sizeof(luckyNum) / sizeof(luckyNum[0]);
	for (int i=0; i<sizeArr; ++i)
		if (n%luckyNum[i] == 0) {
			cout << "YES";
			return 0;
		}
		
	cout << "NO";
	return 0;
}
