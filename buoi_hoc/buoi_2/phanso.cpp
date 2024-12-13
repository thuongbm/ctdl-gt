#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct phanso{
	int t,m;
	void nhap(){
		cin >> t >> m;
	}
	void xuat();
	void rg();
};
void phanso :: xuat(){
	cout << t << '/' << m;
}
void phanso :: rg(){
	int d = __gcd(t,m);
	t = t/d;
	m = m/d;
}
main(){
	phanso p,q;
	p.t = 2;
	p.m = 3;
	cout << "\np = ";
	p.xuat();
	cout << "nhap q ";
	q.nhap();
	cout << "\nq = ";
	q.xuat();
	q.rg();
	cout << "\nq = ";
	q.xuat();
}


