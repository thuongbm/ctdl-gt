//Tichpx nhap a1...an, b1...bm 
//Tinh tong cua tong
#include<bits/stdc++.h>
using namespace std;

void nhap(int &n,int *&a)
{
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
}

int tong(int n,int *a)
{
	int s=0;
	for(int i=0;i<n;i++) s+=a[i];
	return s;
}

int main()
{
	int n,m,*x,*y;
	nhap(n,x);
	nhap(m,y);
	cout<<tong(n,x)+tong(m,y);
	delete []x;
	delete []y;
}

