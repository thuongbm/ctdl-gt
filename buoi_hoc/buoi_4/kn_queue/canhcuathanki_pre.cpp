#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void sol(){
	queue <pair<string , int>>q;
	for (string x : {"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"}){
		q.push({x,1});
	}
	int n;
	cin >> n;
	while (n>q.front().second){
		n-=q.front().second;
		q.push(q.front());
		q.back().second*=2;
		q.pop();
	}
	cout << q.front().first<<endl;
}
main(){
	int t;
	cin >> t;
	while (t--){
		sol();
	}
}


