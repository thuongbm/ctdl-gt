#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifndef __nodestack__cpp
#define __nodestack__cpp
template <class T>
class node{
	T ele;
	node <T> *next;
	public:
		node <T> (T x, node <T> *N = NULL){
			ele = x;
			next = N;
		}
		node <T> &getele(){
			return ele;
		}
		node <T> *getnext(){
			return next;
		}
		void setnext(node<T>* N) { 
        next = N;
    }
};
template <class T>
class Stack{
	unsigned num;
	node <T> *h;
public:
	Stack (){
		num = 0;
		h = NULL;
	}
	bool empty(){
		return num == 0;
	}
	T &top(){
		return h->getele();
	}
	void pop(){
		if (num <= 1){
			num = 0;
			h = NULL;
			return;
		}
		h = h->getnext();
		num--;
	}
	void push(T x){
		h = new node <T>(x, h);
		num++;
	}
	void pop_last(){
		if (empty()) return;
		if(num == 1){
			delete h;
			num = 0;
			h = NULL;
			return ;
		}
		node <T> *x = h;
		while (x->getnext()->getnext() != NULL){
			x = x->getnext();
		}
		delete x->getnext();
		x->setnext(NULL);
		num--;
	}
};
#endif
main(){
	Stack <int> s;
	s.push(10);
    s.push(20);
    s.push(30);

    s.pop_last();  

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

	
}


