#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	int n, k;
	list <pair<int, int>> l;
	cin >> n >> k;
	int x;
	for (int i = 1 ; i <= n ; i++){
		cin >> x;
		while (l.size() && l.back().second <= x) l.pop_back();
		l.push_back({i, x});
		if (i >= k){
			while (i - l.front().first >= k) l.pop_front();
			cout << l.front().second << ' ';
		}
	} 
}


