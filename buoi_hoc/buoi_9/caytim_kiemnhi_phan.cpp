#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T>
struct node{
	T ele;
	node *right, *left;
	node (T x){
		ele = x;
		left = right = 0;
	}
};
template <class T>
void add(node<T> *&h, T x){
	if (h == 0) h = new node<T> (x);
	return add(x < h->ele?h->left:h->right,x);
}
template <class T>
void draw(node <T> *h, string p = "\n"){
	if (h){
		draw(h->left, p +"\t");
		cout << p << h->ele;
		draw(h->right, p+"\n");
	}
}
template <class T>
T max_node(node <T> *h){
	return h->right ? max_node(h->right) : h->ele;
}
template <class T>
void remove(node <T>* &h, T x){
	if (!h) return;
	if (h->ele == x){
		if (!h->left){
			node <T> *p = h;
			h = h->right;
			delete p;
		}
		else if(!h->right){
			node <T> *p = h;
			h = h->left;
		}
		else {
			h->ele = max_node(h->left);
			remove(h->left, h->ele);
		}
	}
	else remove(x < h->ele ? h->left : h->right, x);
}
template <class T>
node <T> *find(node<T> *h, T x){
	if (!h or h->ele == x) return h;
	return find(x < h->ele ? h->right : h->left, x);
}
template <class T>
void inorder(list <T> &l, node <T> )
template <class T>
struct Set{
	node <T> *root = NULL;
	int n = 0;
	Set(){
		root = 0;
		n = 0;
	}
	void insert(T x){
		node <T> *p = find(root, x);
		if (!p){
			n++;
			p = new node <T> (x);
		}
	}
	void erase(T x){
		node <T> *p = find (root, x);
		if (p) {
			n--;
			remove(p,x);
		}
	}
	typedef list <node <T> *>::iterator iterator;
	iterator
};
main(){
	node <int> *root = 0;
	for (int x : {60, 45, 23, 14, 45, 78}){
		add(root, x);
	}
	draw(root);
}


