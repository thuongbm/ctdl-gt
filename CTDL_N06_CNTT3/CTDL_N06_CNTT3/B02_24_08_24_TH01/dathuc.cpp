//Tichpx xay dung dathuc tinh tong 3 da thuc
#include<bits/stdc++.h>
using namespace std;

struct dathuc
{
	int n;
	double *a;
	dathuc() {n=0;a=NULL;}
	dathuc(int _n) 
	{
		n=_n; 
		a=new double[n+1];
		fill(a,a+n+1,0);  //a[0]=...a[n]=0
	}
	~dathuc()
	{
		if(a!=NULL) delete []a;
	}
	dathuc(const dathuc &P) //toan tu copy
	{
		//cout<<"copy";
		n=P.n; 
		a=new double[n+1];
		for(int i=0;i<=n;i++) a[i]=P.a[i];			
	}
	dathuc &operator=(const dathuc &P) //toan tu gan
	{
		//cout<<"gan";
		this->n=P.n; 
		if(a) delete []a;
		this->a=new double[n+1];
		for(int i=0;i<=n;i++) this->a[i]=P.a[i];			
		return *this;
	}
	friend istream &operator>>(istream &is,dathuc &p)
	{
		is>>p.n;
		if(p.a) delete[]p.a;
		p.a=new double[p.n+1];
		for(int i=0;i<=p.n;i++) is>>p.a[i];
		return is;
	}
	friend ostream &operator<<(ostream &os,dathuc p)
	{
		for(int i=0;i<=p.n;i++) os<<p.a[i]<<" ";
		return os;
	}
	friend dathuc operator+(const dathuc p,const dathuc q)
	{
		dathuc r(max(p.n,q.n));
		for(int i=0;i<=p.n;i++) r.a[i]+=p.a[i];
		for(int i=0;i<=q.n;i++) r.a[i]+=q.a[i];
		return r;
	}
};
int main()
{
	dathuc P,Q,R,S;
	cin>>P>>Q>>R;
	S=P+Q+R;
	cout<<S;
}

