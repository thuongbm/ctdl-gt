#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
	int ele;
	node *left, *right;
	node (int n){
		ele = n;
		if (n % 2  == 0 && n > 4){
			left = new node (n / 2 - 2);
			right = new node (n / 2 + 2);
		}
		else left = right = NULL;
	}
};
void pre_order(node *T){
	if (T == 0) return;
	cout << T->ele << ' ';
	pre_order(T->left);
	pre_order(T->right);
}
void in_order(node *T){
	if (T == 0) return;
	in_order(T->left);
	cout << T->ele << ' ';
	in_order(T->right);
}
void pos_order(node *T){
	if (T == 0) return ;
	pos_order(T->left);
	pos_order(T->right);
	cout << T->ele << ' ';
}
void draw(node *T, string prompt = "\n"){
	if (T == 0) return;
	draw(T->left, prompt + "\t");
	cout << prompt << T->ele;
	draw(T->right, prompt + "\t");
}
int sum(node *T){
	if (!T) return 0;
	return T->ele + sum (T->left) + sum(T->right);
}
int leaves(node *T){
	if (!T) return 0;
	if (!T->left && !T->right) return 1;
	return leaves(T->left) + leaves(T->right);
}
int hight(node *T){
	if (!T) return 0;
	if (!T->left && !T->right) return 1;
	return max(hight(T->left), hight(T->right)) + 1;
}
main(){
	node *T = new node(60);
	cout << "\npre: "; pre_order(T);
	cout << "\nin: "; in_order(T);
	cout << "\npos: "; pos_order(T);
	cout << "\ndraw: \n"; draw(T);
	cout << "\ntong: " << sum(T);
	cout << "\nso la: " << leaves(T);
	cout << "\nchieu cao: " << hight(T);
}


