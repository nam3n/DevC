#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>
using namespace std;
#define For(i,a,b) for(int i=(a), _b=(b); i<_b; ++i)

int main() {
	string s; cin >> s;
	int upperCount = 0, lowerCount = 0;
	For(i,0,s.length())
		if (isupper(s[i])) ++upperCount; else ++ lowerCount;
	if (upperCount > lowerCount) For(i,0,s.length()) putchar(toupper(s[i]));
	else For(i,0,s.length()) putchar(tolower(s[i]));
}
