//Tichpx - doi co so 2
#include<bits/stdc++.h>
using namespace std;

void sol()
{
	int n;
	cin>>n;
	stack<int> S;
	while(n)	
	{
		S.push(n%3);
		n/=3;
	}
	while(S.size()>0)
	{
		cout<<S.top();
		S.pop();
	}
	cout<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--) sol();
}

