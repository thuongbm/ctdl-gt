//Tichpx
#include<bits/stdc++.h>
using namespace std;
struct phanso
{
	int t,m;             //thuoc tinh
	void nhap()         //phuong thuc
	{
		cin>>t>>m;
	}
	void xuat();         //phuong thuc
	void rg()
	{
		int d=__gcd(t,m); t/=d;m/=d;
		if(m<0) {t/=-1;m/=-1;}
	}
};

void phanso::xuat()
{
	cout<<t<<"/"<<m;
}

int main()
{
	phanso p,q;
	p.t=2;
	p.m=3;
	cout<<"\np = ";  
	p.xuat();
	cout<<"nhap q : ";
	q.nhap();
	cout<<"\nq = ";  
	q.xuat();
	q.rg();
	cout<<"\nq = ";  
	q.xuat();
}

