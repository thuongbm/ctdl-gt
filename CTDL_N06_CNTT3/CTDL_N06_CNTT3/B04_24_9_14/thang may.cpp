//Tichpx thang may
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s,f,k,m;
	cin>>n>>k>>m>>s>>f;
	queue<int> Q; Q.push(s);
	map<int,int> res={{s,1}};
	while(Q.size() && res[f]==0)
	{
		int u=Q.front(); Q.pop();
		for(int v:{u+k,u-m})
		if(1<=v&& v<=n && res[v]==0)
		{
			Q.push(v);
			res[v]=res[u]+1;
		}
	}
	cout<<res[f]-1;
}

