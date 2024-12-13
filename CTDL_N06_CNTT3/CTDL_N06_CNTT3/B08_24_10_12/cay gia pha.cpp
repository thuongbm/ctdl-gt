//Tichpx - cay gia pha
#include<bits/stdc++.h>
using namespace std;
struct node
{
	string elem;
	int gen;
	vector<node *> chil;
	node(string e,int g=0){elem=e;gen=g;} 
};
node *find(node *T,string x)
{
	if(T==NULL or T->elem==x) return T;
	for(auto c:T->chil)
	{
		node *p=find(c,x);
		if(p!=NULL) return p;
	}
	return 0;
}
void inorder(node *T)
{
	if(!T) return;
	if(T->chil.size()) inorder(T->chil[0]);
	cout<<T->elem<<" ";
	for(int i=1;i<T->chil.size();i++) inorder(T->chil[i]);
}
int hight(node *T)
{
	if(T==NULL) return 0;
	int h=0;
	for(auto c:T->chil)	h=max(hight(c),h);
	return h+1;
}
int max_num_chil(node *T)
{
	if(T==NULL) return 0;
	int h=T->chil.size();
	for(auto c:T->chil)	h=max(max_num_chil(c),h);
	return h;
}
void BFS(node *T)
{
	queue<node*> Q;
	Q.push(T);
	while(Q.size())
	{
		node *u=Q.front(); Q.pop();
		cout<<u->elem<<" ";
		for(auto c:u->chil) Q.push(c);
	}
}

int main()
{
	freopen("giapha.txt","r",stdin);
	node *T=NULL;
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		string x,y;
		cin>>x>>y;
		if(i==1) T=new node(x);
		node *p=find(T,x);
		p->chil.push_back(new node(y,p->gen+1));
	}
	inorder(T);
	cout<<"\n"<<max_num_chil(T);
	cout<<"\n"<<hight(T);
	cout<<"\nDuyet theo the he : "; BFS(T);
	cout<<"\nNhap ten de tim ";
	string name;
	cin>>name;
	node*p=find(T,name);
	if(!p) cout<<"\nKhong thay ";
	else cout<<"\nThay "<<name<<" o the he "<<p->gen;
}

