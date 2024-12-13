//Tichpx
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
	stack<int> S;  //khai bao xong S luon rong
	if(S.empty()) cout<<"\nStack roong";
	for(int x:{4,7,2,8,1,5}) S.push(x);
	cout<<"\nSo phan tu : "<<S.size();   //S.size()
	cout<<"\nDinh cua stack la "<<S.top();  //top chi xem khong loai bo khoi stack
	
	S.top()=10; //S.pop(); S.push(10);
	cout<<"\nDinh cua stack la "<<S.top();
	cout<<"\nSo phan tu : "<<S.size()<<"\n";   
	
	while(not S.empty())
	{
		cout<<S.top()<<" ";
		S.pop();
	}
}

