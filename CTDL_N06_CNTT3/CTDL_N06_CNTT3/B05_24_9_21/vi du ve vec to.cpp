//Tichpx
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> A;  //khai bao vec to rong
	vector<int> B(10);  //khai bao vec to co 10 phan tu, cac phan tu chua ro
	vector<int> C(5,3); //3 3 3 3 3
	vector<int> D(B.begin(),B.end()); //D=B
	vector<int> E=C;
	int x[]={4,7,2,8,4,8,3,2};
	vector<int> F(x+2,x+7);  
	cout<<"\nF : ";
	for(vector<int>::iterator it=F.begin();it!=F.end();it++) cout<<*it<<" ";
	cout<<"\nF : duyet nguoc : ";
	for(vector<int>::reverse_iterator it=F.rbegin();it!=F.rend();it++) cout<<*it<<" ";
	C.resize(7,2);
	cout<<"\nC : "; 
	for(auto c:C) cout<<c<<" ";  //iterator
	C.push_back(7);
	C.push_back(9);
	cout<<"\nC : "; 
	for(auto c:C) cout<<c<<" ";
	cout<<"\nC.size : "<<C.size();
	cout<<"\nC.cap : "<<C.capacity();
	cout<<"\nC.front : "<<C.front();
	cout<<"\nF : "; for(int i=0;i<F.size();i++) cout<<F[i]<<" ";
	F.insert(F.begin()+2,-5);
	cout<<"\nF : "; for(int i=0;i<F.size();i++) cout<<F[i]<<" ";
	F.erase(F.begin()+3);	
	cout<<"\nF : "; for(int i=0;i<F.size();i++) cout<<F[i]<<" ";
}

