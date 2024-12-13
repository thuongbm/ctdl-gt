//Tichpx
#include<bits/stdc++.h>
using namespace std;
class phanso
{
	int t,m;             //thuoc tinh
	public:
	phanso(int _t=0,int _m=1)            //ham tao  constructor
	{
		t=_t;
		m=_m;
	}
	friend istream &operator>>(istream &is,phanso &p)
	{
		char c;
		is>>p.t>>c>>p.m;
		return is;
	}
	friend ostream &operator<<(ostream &os,phanso p)
	{
		os<<p.t<<"/"<<p.m;
		return os;
	}
	friend phanso operator+(phanso p,phanso q)
	{
		phanso r(p.t*q.m+p.m*q.t,p.m*q.m);
		r.rg();
		return r;
	}
	void rg()
	{
		int d=__gcd(t,m); t/=d;m/=d;
		if(m<0) {t/=-1;m/=-1;}
	}
};
int main()
{
	phanso p(14,16),q(-2),r;
	cout<<"\np = "<<p;
	cout<<"\nq = "<<q;
	cout<<"\nr = "<<r;
	p=phanso(6,8);
	r=phanso(6,4);
	q=-8;
	cout<<"\np = "<<p;
	cout<<"\nq = "<<q;
	cout<<"\nr = "<<r;
	cout<<"\np+q = "<<p+q+r;
	
}

