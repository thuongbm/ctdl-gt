//Tichpx - cay heap va hang doi uu tien
#include<bits/stdc++.h>
using namespace std;

template <class T>
struct node
{
	T elem;
	int n;
	node*left,*right;
	node(T e,node<T>*L=0,node<T>*R=0){elem=e;left=L; right=R;n=1+(L?L->n:0)+(R?R->n:0);}
};
template <class T,class K>
void add(node<T> *&H,T x,K cmp)
{
	if(!H or cmp(H->elem,x)) H=new node<T>(x,H,0);
	else 
	{
		H->n++;
		if(!H->left) H->left=new node<T>(x,0); 
		else if(!H->right) H->right=new node<T>(x,0); 
		else add(H->left->n<H->right->n?H->left:H->right,x,cmp);
	}
}
template <class T,class K>
void remove(node<T>*&H,K cmp)  //xoa goc
{
	if(!H) return;
	if(!H->left) {node<T>*p=H; H=H->right; delete p; return;}
	if(!H->right) {node<T>*p=H; H=H->left; delete p; return;}
	H->n--;
	if(cmp(H->left->elem,H->right->elem))
	{
		H->elem=H->right->elem;
		remove(H->right,cmp);
	}	
	else
	{
		H->elem=H->left->elem;
		remove(H->left,cmp);
	}	
}
//template <class K>
//void draw(node<K> *T,string prompt="\n")
//{
//	if(T==0) return;
//	draw(T->left,prompt+"\t");
//	cout<<prompt<<T->elem;
//	draw(T->right,prompt+"\t");
//}
template <class T,class K=less<T> >
struct PQ
{
	node<T> *Head=0;
	K cmp;
	PQ(){Head=0;}
	~PQ() {while(Head) remove(Head,cmp);}
	bool empty() {return Head==0;}
	int size() {return Head?Head->n:0;}
	void push(T x) {add(Head,x,cmp);}
	T top() {return Head->elem;}
	void pop() {remove(Head,cmp);}
};
struct SS
{
	bool operator()(int a,int b) {return a%2==b%2?a<b:a%2<b%2;}
};
int main()
{
	//PQ<int,greater<int> > Q;
	PQ<int,SS > Q;
	//PQ<int> Q;
	for(int x:{47,28,68,48,32,17,21,75,37,63,48}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}

