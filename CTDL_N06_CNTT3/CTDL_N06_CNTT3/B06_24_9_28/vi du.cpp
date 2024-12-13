//Tichpx
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
	list<int> L1;   //tao L rong
	list<int> L(3,5);
	for(int i=1;i<=10;i++) i%2?L.push_front(i):L.push_back(i);
	
	cout<<"\nL : ";
	for(list<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" "; 

	cout<<"\nL : ";
	for(list<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" "; 
	
	L.pop_front();
	L.pop_back();
	L.front()=30;
	L.back()=20;
	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
	L.sort();
	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
	
	auto it=L.begin(); it++;it++;it++;
	L.erase(it);
	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
	it=L.begin(); it++;it++;it++;
	L.insert(it,-2);
	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
	

}

