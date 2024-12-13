#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	string x; cin >>x; vector <ll> a,b,c;
	for (auto it = x.rbegin(); it != x.rend(); it++){
		a.push_back(*it-'0');
	}
	cin >> x;
	for (auto it = x.rbegin(); it != x.rend(); it++){
		b.push_back(*it-'0');
	}
	c.resize(a.size()+b.size(),0);
	for (int i=0;i<a.size();i++){
		for (int j=0;j<b.size();j++){
			c[i+j]+=a[i]*b[j];
		}
	}
	ll rem=0;
	for (auto &x:c){
		rem+=x;
		x=rem%10;
		rem/=10;
	}
	for (;rem>0;rem/=10) c.push_back(rem%10);
	for (auto it = c.rbegin(); it!=c.rend();it++){
		cout <<*it;
	}
}


