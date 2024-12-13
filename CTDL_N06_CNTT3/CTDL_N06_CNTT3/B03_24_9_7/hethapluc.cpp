//Tichpx - doi co so 16
#include<bits/stdc++.h>
using namespace std;
//10->A
string Hex="0123456789ABCDEF";

int main()
{
	int n;
	cin>>n;
	stack<char> S;
	while(n)	
	{
		S.push(Hex[n%16]);
		n/=16;
	}
	while(S.size()>0)
	{
		cout<<S.top();
		S.pop();
	}
}

