//Tichpx
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
	queue<int> Q;
	for(int x:{7,4,2,8,3}) Q.push(x);
	
	cout<<"\nsize : "<<Q.size();
	cout<<"\nfront : "<<Q.front();
	cout<<"\nback : "<<Q.back();
	
	Q.front()=10;
	Q.back()*=6;
	
	cout<<"\ncac phan tu ";
	while(Q.size()) {cout<<Q.front()<<" "; Q.pop();	}
	

}

