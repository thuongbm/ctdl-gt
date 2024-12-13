//Tichpx canh cua than ky
#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;

void sol()
{
	Queue<pair<string,int>> Q;
	for(string x:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"}) Q.push({x,1});
	int n;
	cin>>n;
	while(n>Q.front().second) 
	{
		n-=Q.front().second;
		Q.push(Q.front());
		Q.back().second*=2;
		Q.pop();
	}
	cout<<Q.front().first<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--) sol();
}

