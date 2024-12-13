//Tichpx - cai dat queue bang danh sach lienket don
#include<bits/stdc++.h>
using namespace std;
#ifndef __myqueue__cpp__
#define __myqueue__cpp__
template <class T>
struct node
{
	T elem;
	node *next;
	node(T e) {elem=e; next=0;}
};
template <class T>
struct QUEUE
{
 	node<T> *head,*trail;
	int n;
	QUEUE() {n=0;head=trail=0;}
	~QUEUE() {while(n>0) pop();}
	bool empty() {return n==0;}
	int size() {return n;}
	void pop() 
	{
		node<T>*p=head;
		head=p->next;
		delete p;
		n--;
		if(!n) trail=0;
	}
	void push(T x)       
	{
		if(n==0) head=trail=new node<T>(x);
		else trail=trail->next=new node<T>(x);
		n++;
	}
	T &front(){return head->elem;}
	T &back(){return trail->elem;}	
};
#endif
//int main()
//{
//	QUEUE<int> Q;
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

