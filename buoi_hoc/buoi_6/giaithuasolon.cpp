//Tichpx - giai thua so lon
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n,nho;
	cin>>n;
	vector<long> A(1,1); //<1>
	for(int i=2;i<=n;i++)
	{
		nho=0;
		for(auto &a:A) 
		{
			nho=nho+a*i;
			a=nho%10;
			nho/=10;
		}
		while(nho) {A.push_back(nho%10); nho/=10;}
	}
//	reverse(A.begin(),A.end()); for(auto a:A) cout<<a;
	for(auto it=A.rbegin();it!=A.rend();it++) cout<<*it;
}

