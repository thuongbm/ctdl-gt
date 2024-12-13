//Tichpx
#include<bits/stdc++.h>
using namespace std;

template <class T>
void sx(int n,T *a,bool ok=1)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j]==ok) swap<T>(a[i],a[j]);
}

int main()
{
	int a[]={4,7,2,8};
	float b[]={2.3,4.2,1.5,3.7};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	sx(n,a); for(int x:a) cout<<x<<" "; cout<<"\n";
	sx(m,b); for(auto x:b) cout<<x<<" "; cout<<"\n";
}

