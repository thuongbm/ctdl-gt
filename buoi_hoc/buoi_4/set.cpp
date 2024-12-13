#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	//unordered_set khong sx (cai dat bang banh bam)
	set <int> s; // cai dat bang cay nhi phan
	for (int x : {4, 7, 2, 8, 4, 8, 3, 2}){
		s.insert(x);
	}
	for (int x : s){
		cout << x;
	}
}


