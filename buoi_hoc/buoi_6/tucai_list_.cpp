#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T>
struct node{
	T ele;
	node *next;
	node (T e = 0, node <T> *N = 0){
		ele = e;
		next = NULL;
	}
};
template <class T>
struct slist_ite{
	node <T> *cur;
	slist_ite(node <T> *c = 0){
		cur = c;
	}
	T &operator *() {
		return cur->ele;
	}
	bool operator != (slist_itr<T> it1){
		return cur != it1.cur;
	}
};

template <class T>
struct slist{
	node <T> *head, *trail;
	int n;
	slist(){
		head = trail = 0;
		n = 0;
	}
	~slist(){
		
	}
	bool empty(){
		return n == 0;
	}
	int size(){
		return n;
	}
	T &front(){
		return head->ele;
	}
	T &back(){
		return trail->ele;
	}
	void push_front(T x){
		if ( n == 0 ) head = trail = new node <T> (x);
		else {
			head = new node <T> (x, head);
		}
		n++;
	}
	void push_back(T x){
		if ( n == 0 ) head = trail = new node <T> (x);
		else {
			trail = trail->next = new node<T> (x);
		}
		n++;
	}
	void pop_front(){
		node <T> *p = head;
		head = head->next;
		delete p;
		if ( n == 0) trail = 0;
	}
	void pop_back(){
		if (n == 1) return pop_front();
		else {
			node <T> *p = head;
			while (p->next != NULL){
				p = p->next;
			}
			delete trail;
			trail = p;
			p->next = 0;
			n--;
		}
	}
	void travel(){
		for (node <T> *p = head ; p ; p = p->next){
			cout << p->ele << ' ';
		}
	}
};
main(){
	slist <int> l;
	for (int i = 0; i < 10; i++){
		i%2 ? l.push_front(i): l.push_back(i);
	}
	cout << "\nsize l: " << l.size();
	cout << "\nfront : " << l.front();
	cout << "\nback: " << l.back();
}


