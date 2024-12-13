//Tichpx lien ket
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int elem; 
	node *next;
	node(int e=0,node *N=0)  //ham hinh hai ban dau
	{
		elem=e;
		next=N;
	}
};


signed main()
{
	node A(3,NULL);
	node B(7,&A);
	node *C=new node(2,&B);
	node D(1,C);  //do C la con tro nen C la dia chia  
	//1->2->7->3
	node *p=&D;
	for(node *q=p;q!=NULL;q=q->next) cout<<q->elem<<" ";
}

