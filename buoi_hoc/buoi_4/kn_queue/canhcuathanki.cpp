#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	queue <string> q;
	for (string x : {"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"}){
		q.push(x);
	}
	int n;
	cin >> n;
	while ( --n){
		q.push(q.front());
		q.push(q.front());
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}


