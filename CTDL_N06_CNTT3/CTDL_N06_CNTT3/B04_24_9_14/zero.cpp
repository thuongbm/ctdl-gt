//Tichpx - moi con duong ve 0 -> stack = DFS  con queue = BFS
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	queue <int> S; //stack<int> S;
	set<int> Res;
	cin>>n; 
	S.push(n);
	Res.insert(n);
	while(S.size())
	{
		int u=S.front(); //S.top(); 
		S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if (Res.find(v)==Res.end()) {S.push(v);	Res.insert(v);}
		}
	}
	for(auto r:Res) cout<<r<<" ";
}

