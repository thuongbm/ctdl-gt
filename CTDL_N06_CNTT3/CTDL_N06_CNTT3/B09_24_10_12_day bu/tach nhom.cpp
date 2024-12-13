//Tichpx - cai dat cay bai tach nhom
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *left,*right;
	node(int n)          //de quy tao ra cay luon
	{
		elem=n;
		if(n%2==0 && n>4)
		{
			left=new node(n/2-2);
			right=new node(n/2+2);
		}
		else left=right=NULL;
	}
};
void preorder(node *T)
{
	if(T==0) return;
	cout<<T->elem<<" ";
	preorder(T->left);
	preorder(T->right);
}
void inorder(node *T)
{
	if(T==0) return;
	inorder(T->left);
	cout<<T->elem<<" ";
	inorder(T->right);
}
void postorder(node *T)
{
	if(T==0) return;
	postorder(T->left);
	postorder(T->right);
	cout<<T->elem<<" ";
}
void draw(node *T,string prompt="\n")
{
	if(T==0) return;
	draw(T->left,prompt+"\t");
	cout<<prompt<<T->elem;
	draw(T->right,prompt+"\t");
}
int sum(node *T)
{
	if(!T) return 0;
	return T->elem+sum(T->left)+sum(T->right);
}
int leaves(node *T)         //dem so nut la (khong co con)
{
	if(!T) return 0;
	if(!T->left && !T->right) return 1;    //if(!(T->left or T->right)) return 1;
	return leaves(T->left)+leaves(T->right);
}
int hight(node *T)
{
	if(!T) return 0;
	return 1+max(hight(T->left),hight(T->right));
}
int main()
{
	node *T=new node(60);
	cout<<"\npre : "; preorder(T);
	cout<<"\nin  : "; inorder(T);
	cout<<"\npost: "; postorder(T);
	cout<<"\n\nVe :\n\n"; draw(T);
	cout<<"\nTong : "<<sum(T);
	cout<<"\nSo la "<<leaves(T);
	cout<<"\nChieu cao : "<<hight(T);
}

