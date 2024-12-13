//Tichpx   nhan 2 so lon
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string x; 
	vector<long> A,B,C;
	cin>>x; for(auto it=x.rbegin();it!=x.rend();it++) A.push_back(*it-'0'); 
	cin>>x; for(auto it=x.rbegin();it!=x.rend();it++) B.push_back(*it-'0');
	C.resize(A.size()+B.size(),0);
	for(int i=0;i<A.size();i++)
	for(int j=0;j<B.size();j++) C[i+j]+=A[i]*B[j];
	long nho=0;
	for(auto &c:C)
	{
		nho+=c;
		c=nho%10;
		nho/=10;
	}
	for(;nho>0;nho/=10) C.push_back(nho%10);
	for(auto it=C.rbegin();it!=C.rend();it++) cout<<*it; 
}

