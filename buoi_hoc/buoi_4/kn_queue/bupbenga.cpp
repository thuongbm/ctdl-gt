#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n,k, res=0;
	cin >> n >> k;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	sort (a,a+n, greater<int>());
	queue <int> q;
	for (auto x: a){
		q.push(x);
		if (q.front() >= k+x ) q.pop();
		else res += x;
	}
	cout << q.size() << ' ' << res;
}


