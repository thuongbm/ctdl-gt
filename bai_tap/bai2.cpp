#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	string s;
	cin >> s;
	for (int i = 0 ; i < s.size() ;i++){
		s[i] = tolower(s[i]);
	}
	cout << s << endl;
	for (int i = 0 ; i < s.size() ; i++){
		s[i] = toupper(s[i]);
	}
	cout << s;
}


