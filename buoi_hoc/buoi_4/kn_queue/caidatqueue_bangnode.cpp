#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifndef __queue__opp__
#define __queue__cpp__
template <class t>
struct node{
	t ele;
	node *next;
	node(t e){
		ele = e;
		next = 0;
	}
};
template <class t>
struct QUEUE{
	node<t> *head, *trail;
	int n;
	QUEUE(){
		n=0;
		head = trail = 0;
	}
	~QUEUE(){
		while (n>0){
			pop();
		}
	}
	bool empty(){
		return 0;
	}
	int size(){
		return n;
	}
	void pop(){
		node <t> *p = head;
		head = p->next;
		delete p;
		n--;
		if (!n) trail = 0;
	}
	void push (t x){
		if (n == 0){
			head = trail = new node <t>(x);
		}
		else {
			trail->next = new node <t>(x);
			trail  = trail->next;
		}
		n++;
	}
	t front(){
		return head->ele;
	}
	t back(){
		return trail->ele;
	}
};
#endif

