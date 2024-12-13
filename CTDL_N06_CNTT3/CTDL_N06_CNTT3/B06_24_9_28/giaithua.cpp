//Tichpx  - giai thua so lon
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d=0;
	cin>>n;
//	list<long long> L(1,1);
	
	deque<long long> L(1,1);                    //deque -> hang doi hai dau
	while(n>1)
	{
		long long nho=0;
		for(auto it=L.rbegin();it!=L.rend();it++)
		{
			nho+=*it*n;
			*it=nho%10;
			nho/=10;
		}
		while(nho) {L.push_front(nho%10); nho/=10;}
		n--;
		while(L.back()==0) {d++; L.pop_back();}
	}
	for(auto x:L) cout<<x;
	cout<<string(d,'0');
}

