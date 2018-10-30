#include <fstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

ifstream cin("test.in");
ofstream cout("test.out");

bool cmp(pair<string, int> a, pair<string, int> b){
	return (a.first > b.first);
}

int main(){
	map <string, int> m;
	map <string, int> :: iterator it;
	string str;
	while(!cin.eof()){
		cin >> str;
		m[str]++;
	}
	sort(m.begin(), m.end(), cmp);
	for(it=m.begin();it!=m.end();it++)
		cout << (*it).first << "\t" << (*it).second << endl;
	
}
