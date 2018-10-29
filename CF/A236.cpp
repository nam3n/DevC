#include<iostream>
using namespace std;
int main() {
	string line;
	cin >> line;
	int distributor[255];
	for (int i=0; i<255; ++i) distributor[i] = 0;
	int count = 0;
	for (int i=0; i<line.length(); ++i)
		if (!distributor[line[i]]) {
			++distributor[line[i]];
			++count;
		}
	if (!(count%2 == 0)) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
	return 0;
}
