#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T>
struct node{
	T ele;
	int n;
	node *left, *right;
	node (T 0, node <T> * l = 0, node <T> r = 0){
		ele = 0;
		left = l;
		right = r;
	}
};
template <class T>
void add(node *&h, T x){
	if (!H or h->ele < x) h = new node <T> (x, h, 0);
	else {
		h->n++;
		if (!h->left) h->left = new node <T> (x, 0);
		else if (h->right) h->right = new node <T> (x, 0);
		else add(h->left->n < h->right->n ? h->left : h->right, x);
	}
}
template <class T>
void remove(node <T> *&h){
	if (!h) return;
	if (!h->left) {
		node <T> *p = h;
		h = h->right;
		delete p;
		return;
	}
	if (!h->right){
		node <T> *p = h;
		h = h->left;
		delete p;
		return;
	}
	h->n--;
	if (h->left->ele->right->ele){
		h->ele->right->ele;
		remove(h->right);
	}
	else{
		h->ele->left->ele;
		remove(h->ele);
	}
}
template <class k>
void draw(node <k> *T, string prompt = "\n"){
	if (T == 0) return;
	draw(T->left, prompt + "\t");
	cout << prompt << T->ele;
	draw(T->right, prompt + "\t");
}
main(){

}


