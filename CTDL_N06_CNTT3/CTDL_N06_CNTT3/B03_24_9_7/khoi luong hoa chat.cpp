//Tichpx khoi luong hoa chat
#include<bits/stdc++.h>
#include"stack.cpp"
#include"stack.cpp"
using namespace std;
map<char,int> KL={{'(',0},{'C',12},{'H',1},{'O',16}};

void sol()
{
	string x;
	cin>>x;
	Stack<int> S;
	for(char c:x)
	if(KL.find(c)!=KL.end()) S.push(KL[c]);
	else if (c==')')
	{
		int t=0;
		while(S.top()) {t+=S.top(); S.pop();}
		S.top()=t;
	}
	else S.top()*=c-'0';         //'3' -> theo ASCII 51
	int res=0;
	while(S.size()) {res+=S.top(); S.pop();}
	cout<<res<<"\n";	
}

int main()
{
	int t; cin>>t; while(t--) sol();
}

