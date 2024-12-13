//Tichpx - duyet cay trong bai moi con duong ve 0
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int elem;
	vector<node*> chil;
	node(int n)   //tao de quy ra cay
	{
		elem=n;
		for(int a=1;a*a<=n;a++)
		if(n%a==0) chil.push_back(new node((a-1)*(n/a+1)));
	}
};
void preorder(node *T)
{
	cout<<T->elem<<" ";
	for(auto c:T->chil) preorder(c);
}
void postorder(node *T)
{
	for(auto c:T->chil) postorder(c);
	cout<<T->elem<<" ";
}
void inorder(node *T)
{
	if(T->chil.size()) inorder(T->chil[0]);
	cout<<T->elem<<" ";
	for(int i=1;i<T->chil.size();i++)	inorder(T->chil[i]);
}
int sum(node *T)
{
	int s=T->elem;
	for(auto c:T->chil) s+=sum(c);
	return s;
}
int count(node *T,int k=0)
{
	if(T->elem==k) return 1;
	if(T->elem<k) return 0;
	int s=0;
	for(auto c:T->chil) s+=count(c,k);
	return s;	
}

int main()
{
	int n;
	cin>>n;
	node *T=new node(n);
	cout<<"\nTien  tt : "; preorder(T);
	cout<<"\nHau   tt : "; postorder(T);
	cout<<"\nTrung tt : "; inorder(T);
	cout<<"\nTong "<<sum(T);
	cout<<"\nDem 0 : "<<count(T,0);
	cout<<"\nDem 10 : "<<count(T,10);
}

