#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n;
	cin >> n;
	deque <ll> l(1,1);
	while (n > 1){
		ll rem = 0;
		for (auto it = l.rbegin(); it != l.rend(); it++){
			rem += *it * n;
			*it = rem % 10;
			rem /= 10;
		}
		while (rem){
			l.push_front(rem % 10);
			rem /= 10;
		}
		n--;
	}
	for (auto x:l) cout << x;
}


