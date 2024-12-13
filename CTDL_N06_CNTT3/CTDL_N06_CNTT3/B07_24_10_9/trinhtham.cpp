//Tichpx - lai la trinh tham (list=deque, priority_queue, interval-tree)
#include<bits/stdc++.h>
using namespace std;
#define vt first
#define gt second

int main()
{
	//list <pair<int,int>> L;
	deque <pair<int,int>> L;
	int n,k,x;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(L.size() && L.back().gt<=x) L.pop_back();
		L.push_back({i,x});
		if(i>=k)
		{
			while(i-L.front().vt>=k) L.pop_front();
			cout<<L.front().gt<<" ";
		}
	}
}

