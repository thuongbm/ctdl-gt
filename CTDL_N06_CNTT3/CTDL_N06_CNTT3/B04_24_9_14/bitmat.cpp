//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	queue<int> Q;
	for(int i=1;i<=n;i++) Q.push(i);	
	while(--n)   //Q.size()>1
	{
		for(int j=1;j<k;j++) {Q.push(Q.front()); Q.pop();}
		Q.pop();
	}
	cout<<Q.front();  //Q.front() = Q.back();
}

