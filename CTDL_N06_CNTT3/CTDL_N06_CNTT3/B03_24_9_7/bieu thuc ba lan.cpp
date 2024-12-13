//Tichpx
#include<bits/stdc++.h>
using namespace std;
map<char,int> UT={{'(',0},{'+',1},{'-',1},{'*',2},{'/',2}};
signed main()
{
	string x,out="";
	stack<char> S;
	cin>>x;
	for(char c:x)
	if(c=='(') S.push(c);
	else if('0'<=c && c<='9') out+=c;
	else if (c==')')
	{
		while(S.top()!='(') {out+=S.top(); S.pop();}
		S.pop();  //bo (
	}
	else
	{
		while(S.size() && UT[S.top()]>=UT[c]) {out+=S.top(); S.pop();}
		S.push(c);
	}
	while(S.size()) {out+=S.top(); S.pop();}
	cout<<out<<"\n";
	stack<int> st;
	for(auto c:out)
	if('0'<=c && c<='9') st.push(c-'0');
	else
	{
		int a=st.top(); st.pop();
		int b=st.top(); st.pop();
		switch(c)
		{
			case '+': st.push(b+a); break;
			case '-': st.push(b-a); break;
			case '*': st.push(b*a); break;
			case '/': st.push(b/a); break;
		}
	}
	cout<<st.top();	
}

