#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n;
	stack <int> s;
	set <int> res;
	cin >> n;
	s.push(n);
	res.insert(n);
	while (s.size()){
		int u = s.top();
		s.pop();
		for (int a = 1; a * a <= u; a++){
			if (u % a == 0){
				int v = (a-1) * (u/a+1);
				if (res.find(v) == res.end()){
					s.push(v);
					res.insert(v);
				}
			}
		}
	}
	for (auto x : res) cout << x << ' ';
}


