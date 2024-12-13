#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
	string ele;
	vector <node *> chil;
	node (string e){
		ele = e;
	}
};
void in_order(node *T){
	if (T->chil.size()) in_order(T->chil[0]);
	cout << T->ele << ' ';
	for (int i = 1 ; i < T->chil.size() ; i++){
		in_order(T->chil[i]);
	}
}
node *find(node *T, string x){
	if (T->ele == x || T == NULL) return T;
	for (auto c : T->chil){
		node *p = find(c, x);
		if (p != NULL) return p;
	}
	return 0;
}
int hight(node *T){
	if (!T) return 0;
	int h = 0;
	for (auto c : T->chil){
		h = max(hight(c), h);
	}
	return h+1;
}
int max_num_chil(node *T){
	if (T == NULL) return 0;
	int h = T->chil.size();
	for (auto c : T->chil) h = max(max_num_chil(c), h);
	return h;
}
void bfs(node *T){
	queue <node *> q;
	q.push(T);
	while(q.size()){
		node *u = q.front();
		q.pop();
		cout << u->ele << ' ';
		for (auto c : u->chil) q.push(c);
	}
}
main(){
	node *T = NULL;
	int n;
	cin >> n;
	for (int i = 1 ; i < n ; i++){
		string x, y;
		cin >> x >> y;
		if (i == 1) T = new node (x);
		node *p = find(T, x);
		p->chil.push_back(new node (y));
	}
	in_order(T);
	cout << endl;
	cout << max_num_chil(T) << endl;
	cout << hight(T);
	cout << "\nDuyet theo the he: "; bfs(T);	
}


