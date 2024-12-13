#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
	int ele;
	vector <node*> chil;
	node (int n){
		ele = n;
		for (int a = 1; a*a < n; a++){
			if (n % a == 0) chil.push_back(new node ((a - 1) * (n / a + 1)));
		}
	}
};
void pre_order(node *T){
	cout << T->ele << ' ';
	for (auto c : T->chil) pre_order(c);
}
void pos_order(node *T){
	for (auto c : T->chil) pos_order(c);
	cout << T->ele << ' ';
}
void in_order(node *T){
	if (T->chil.size()) in_order(T->chil[0]);
	cout << T->ele << ' ';
	for (int i = 1 ; i < T->chil.size() ; i++){
		in_order(T->chil[i]);
	}
}
int sum (node *T){
	int s = T->ele;
	for (auto c : T->chil) s += sum(c);
	return s; 
}
int count (node *T, int k = 0){
	if (T->ele == k) return 1;
	if (T->ele < k) return 0;
	int s = 0;
	for (auto c : T->chil) s += count(c, k);
	return s; 
}
main(){
	int n;
	cin >> n;
	node *T = new node (n);
	cout << "Tien thu tu: "; pre_order(T);
	cout << "\nHau thu tu: "; pos_order(T);
	cout << "\nTrung thu tu: " ; in_order(T);
	cout << "\nTong: " << sum(T);
	cout << "\nDem: " << count(T, 10);
	
}


