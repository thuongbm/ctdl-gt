//Tichpx - tap tam giac
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,res=0;
	cin>>n;
	int a[n]; 
	for(auto &x:a) cin>>x;
	sort(a,a+n,greater<int>());
	list<int> L;
	for(auto x:a)
	{
		while(L.size()>1 && L.front()>=L.back()+x) L.pop_front();
		L.push_back(x);
		if(res<L.size()) res=L.size();
	}
	if(res<3) cout<<"Khong the tao ra day thoa man";
	else cout<<res;
}

