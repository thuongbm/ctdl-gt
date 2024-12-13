#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort (a , a+n, greater <int> ());
	int res = 0;
	list <int> l;
	for (auto x : a){
		while (l.size() > 1 && l.front() >= l.back() + x){
			l.pop_front();
		}
		l.push_back(x);
		if (res <= l.size()) res = l.size();
	}
	if (res < 3) cout << "Khong the tao ra day thoa man";
	else cout << res;
}


