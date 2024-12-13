#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	ll n, rem;
	cin >> n;
	vector <ll> A(1,1); // <1>
	for (int i=2; i<=n;i++){
		rem = 0;
		for (auto &a:A){
			rem = rem+a*i;
			a=rem%10;
			rem/=10;
		}
		while (rem){
			A.push_back(rem%10);
			rem/=10;
		}
	}
	reverse(A.begin(), A.end());
	for (auto a:A){
		cout << a;
	}
}


