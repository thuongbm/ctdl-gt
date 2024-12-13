//Tichpx
#include<bits/stdc++.h>
using namespace std;
map<char,int> A={{'(',1},{')',1},{'[',2},{']',2},{'{',3},{'}',3}};
map<char,char> B={{'(',')'},{'[',']'},{'{','}'}};

string sol()
{
	string x;
	cin>>x;
	stack<char> S;	
	for(char c:x)
	if(B.find(c)!=B.end())
	{
		if(S.size() && A[S.top()]<A[c]) return "Sai";
		S.push(B[c]);
	}
	else if(c==')' or c==']' or c=='}') 
	{
		if(S.empty() or S.top()!=c) return "Sai";
		S.pop();
	}
	return S.empty()?"Dung":"Sai";	
}

int main()
{
	int t;
	cin>>t;
	while(t--) cout<<sol()<<"\n";
}

