//Tichpx - cai dat queue bang mang
#include<bits/stdc++.h>
using namespace std;
#ifndef __queue__cpp__
#define __queue__cpp__
template <class T>
struct Queue
{
	int cap,n,F,L; //cap-capacity, n - size, F-first, L-1 - last
	T *buf;
	Queue() {n=cap=F=L=0; buf=NULL;} //tao ra Queue rong
	~Queue() {if(buf) delete []buf;}
	bool empty() {return n==0;}
	int size() {return n;}
	T &front() {return buf[F];}
	T &back() {return buf[(L?L:cap)-1];}
	void pop() {F=(F+1)%cap;n--;}
	void push(T x)
	{
		if(n==cap) //mo rong mang
		{
			cap=cap?cap*2:1;
			T*tem=buf;
			buf=new T[cap];
			for(int i=F,j=0;i<F+n;i++) buf[j++]=tem[i%n];
			if(tem) delete []tem;
			F=0;
			L=n;
		}				
		buf[L]=x;
		L=(L+1)%cap;
		n++;
	}
};
#endif

//
//int main()
//{
//	Queue<int> Q;
//	for(int x:{7,4,2,8,3}) Q.push(x);
//	
//	cout<<"\nsize : "<<Q.size();
//	cout<<"\nfront : "<<Q.front();
//	cout<<"\nback : "<<Q.back();
//	
//	Q.front()=10;
//	Q.back()*=6;
//	
//	cout<<"\ncac phan tu ";
//	while(Q.size()) {cout<<Q.front()<<" "; Q.pop();	}
//	
//}

