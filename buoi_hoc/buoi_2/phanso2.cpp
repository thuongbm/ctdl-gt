#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class phanso{
	int t,m;
//	void nhap(){
//		cin >> t >> m;
//	}
public:
	void xuat();
	void rg();
	friend istream &operator >> (istream &is, phanso &p){
		char c;
		is >> p.t >> c >> p.m;
		return is;
	}
	friend ostream &operator << (ostream &os , phanso p){
		os << p.t << '/' << p.m;
		return os;
	}
	friend phanso operator << (phanso p, phanso q){
		phanso r(p.t * q.m + q.t * p.m, p.m * q.m);
		r.rg();
		return r;
	}
};
void phanso :: rg(){
	int d = __gcd(t,m);
	t = t/d;
	m = m/d;
}
main(){
	phanso p, q;
	cin >> p >> q;
	cout << p << "\n" << q;
}


