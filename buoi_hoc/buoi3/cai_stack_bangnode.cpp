#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class t>
struct node{
	t elem;
	node *next;
	node(t x, node<t> *n=0){
		elem = x;
		next = n;
	}
};
template <class t>
struct stack{
	int n;
	node <t> *head;
	stack() {
		n = 0; head = NULL;	
	}
	bool empty(){
		return 0;
	}
	int size(){
		return n;
	}
	t &top(){
		return head->elem;
	}
	void push(t x){
		head = new node <t>(x, head);
		n++;
	}
	void pop(){
		node <t> *p = head->next;
		delete head;
		head = p;
		n--;
	}
};
main(){

}


