//Tichpx
#include<bits/stdc++.h>
using namespace std;
#ifndef  __stack__cpp__
#define  __stack__cpp__
template <class T>
class Stack
{
	int n,cap;   //cap=capacity, n - size 
	T *buf;
	public:      //tu viet toan tu copy va toan tu gan
	Stack() {n=cap=0; buf=0;}
	~Stack() {if(buf) delete []buf;}
	bool empty() {return n==0;}
	int size() {return n;}	
	void push(T x) 
	{
		if(n==cap)
		{
			T *tem=buf;     //tao ra bo nho phu
			cap=cap?2*cap:1;  // mo rong bo nho
			buf=new T [cap];
			for(int i=0;i<n;i++) buf[i]=tem[i]; //sao chep
			if(tem) delete []tem;
		}
		buf[n++]=x;		
	}
	void pop() {n--;}
	T &top(){return buf[n-1];}
};
#endif
/*
signed main()
{
	Stack<int> S;
	if(S.empty()) cout<<"\nStack roong";
	for(int x:{4,7,2,8,1,5}) S.push(x);
	cout<<"\nSo phan tu : "<<S.size();   //S.size()
	cout<<"\nDinh cua stack la "<<S.top();  //top chi xem khong loai bo khoi stack
	
	S.top()=10; //S.pop(); S.push(10);
	cout<<"\nDinh cua stack la "<<S.top();
	cout<<"\nSo phan tu : "<<S.size()<<"\n";   
	//Stack<int> Q;
	while(not S.empty())
	{
		cout<<S.top()<<" ";
		S.pop();
	}

}
*/
