//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int> Q;
	for(auto x:{52,64,65,76,347,65,8,678}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}

