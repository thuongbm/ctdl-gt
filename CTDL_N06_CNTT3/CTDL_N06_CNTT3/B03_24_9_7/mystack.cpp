//Tichpx  - cai dat stack bang lien ket
#include<bits/stdc++.h>
using namespace std;
#ifndef __mystack__cpp__
#define __mystack__cpp__
template <class T>
struct node
{
	T elem;
	node *next;
	node(T x,node<T> *N=0)
	{
		elem=x;
		next=N;
	}	
};
template <class T>
struct STACK
{
	int n; //size
	node<T> *Head;
	STACK() {n=0; Head=NULL;}  //ham tao stack rong
	~STACK() {while(n) pop();}
	bool empty() {return n==0;}
	int size() {return n;}
	T &top(){return Head->elem;}
	void push(T x)
	{
		Head=new node<T>(x,Head);
		n++;
	}
	void pop()
	{
		//node<T> *p=Head; Head=p->next; delete p;
		node<T> *p=Head->next; delete Head; Head=p;
		n--;
	}
};

#endif
//
//signed main()
//{
//	STACK<int> S;  //khai bao xong S luon rong
//	if(S.empty()) cout<<"\nStack roong";
//	for(int x:{4,7,2,8,1,5}) S.push(x);
//	cout<<"\nSo phan tu : "<<S.size();   //S.size()
//	cout<<"\nDinh cua stack la "<<S.top();  //top chi xem khong loai bo khoi stack
//	
//	S.top()=10; //S.pop(); S.push(10);
//	cout<<"\nDinh cua stack la "<<S.top();
//	cout<<"\nSo phan tu : "<<S.size()<<"\n";   
//	
//	while(not S.empty())
//	{
//		cout<<S.top()<<" ";
//		S.pop();
//	}
//}

