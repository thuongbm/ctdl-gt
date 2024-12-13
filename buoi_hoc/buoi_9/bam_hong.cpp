#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T>
struct node{
	T ele;
	node *next;
	node (T e, n ode *N = 0){
		ele = e;
		next = N;
	}
};
template <class T>
int myhash(int m = 12347, T x){
	hash <T> h;
	return h(x)%m;
};
template <class T> 
struct Hashtable{
	int cap;
	node <T> **ht;
	Hashtable(int k = 12347){
		cap = k;
		ht = new node <T> *[cap];
	}
	~Hashtable(){
		delete ht;
	}
	void insert(T x){
		int key = myhash(x);
		ht[key] = new node (x, ht[key]);
		n++;
	}
	void erase(T x){
		int key = myhash(x);
		node <T> *p = ht[key];
		if (p->ele = x){
			ht[key] = p->next;
			delete p;
			n--;
			return;
		}
		while (p->next and p->next->ele != x){
			p = p->next;
		}
		if (p->next){
			node <T> *q = p->next;
			p->next = q->next;
			n--;
			delete q;
		}
		void travel (){
			for (int i = 0 ; i < cap ; i++){
				for (node <T> *p = ht[i]; )
			}
		}
	}
};
main(){

}


