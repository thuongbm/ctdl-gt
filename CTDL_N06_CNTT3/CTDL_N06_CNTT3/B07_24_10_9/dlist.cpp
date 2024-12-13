//Tichpx - cai dat danh sach lien ket don cai dat tren C+
#include<bits/stdc++.h>
using namespace std;
template <class T>
struct node
{
	T elem;
	node *next,*prev;
	node(T e=0,node<T> *P=0,node<T> *N=0) {elem=e;prev=P;next=N;}
};

template <class T>
struct dlist_ite                      //bo lap xuoi 
{
	node<T> *cur;                     //node hien tai
	dlist_ite(node<T>*c=0) {cur=c;}   //tao bo lap
	T &operator*() {return cur->elem;}
	bool operator!=(dlist_ite<T> it1) {return cur!=it1.cur;}
	dlist_ite<T> operator++(int)                //it++
	{
		cur=cur->next;
		return cur;      // dlist_ite<T>(cur);
	}
	dlist_ite<T> operator++()                //++it
	{
		dlist_ite<T> it1=cur;
		cur=cur->next;
		return it1;
	}
};

template <class T>
struct dlist_rite                      //bo lap xuoi 
{
	node<T> *cur;                     //node hien tai
	dlist_rite(node<T>*c=0) {cur=c;}   //tao bo lap
	T &operator*() {return cur->elem;}
	bool operator!=(dlist_rite<T> it1) {return cur!=it1.cur;}
	dlist_rite<T> operator++(int)                //it++
	{
		cur=cur->prev;
		return cur;      // dlist_ite<T>(cur);
	}
	dlist_rite<T> operator++()                //++it
	{
		dlist_rite<T> it1=cur;
		cur=cur->prev;
		return it1;
	}
};


template <class T>
struct dlist
{
	node<T>*head,*trail;
	int n;
	dlist() {head=trail=0;n=0;}
	~dlist() {while(n) pop_front();}
	bool empty() {return n==0;}
	int size() {return n;}
	T &front() {return head->elem;}
	T &back() {return trail->elem;}
	void push_front(T x)
	{
		if(n==0) head=trail=new node<T>(x);
		else 
		{
			head=new node<T>(x,0,head);
			head->next->prev=head;
		}
		n++;
	}
	void push_back(T x)
	{
		if(n==0) head=trail=new node<T>(x);
		else 
		{
			trail=new node<T>(x,trail,0);
			trail->prev->next=trail;
		}
		n++;	
	}
	void pop_front()
	{
		node<T>*p=head;
		head=head->next;
		if(head) head->prev=0;
		delete p;
		n--;
		if(n==0) trail=0;
	}
	void pop_back()
	{
		node<T>*p=trail;
		trail=trail->prev;
		if(trail) trail->next=0;
		delete p;
		n--;
		if(n==0) head=0;
	}
//	void travel()  //xuat
//	{
//		for(node<T>*p=head;p;p=p->next) cout<<p->elem<<" ";
//	}
	typedef dlist_ite<T> iterator;
	iterator begin() {return head;}
	iterator end() {return NULL;}
	
	typedef dlist_rite<T> reverse_iterator;
	reverse_iterator rbegin() {return trail;}
	reverse_iterator rend() {return NULL;}

	void insert(iterator it1,T x)  //chen vao it1
	{
		if(it1.cur==head) return push_front(x);
		if(it1.cur==NULL) return push_back(x);
		node<T>*p=it1.cur->prev;
		p->next=new node<T>(x,p,it1.cur);
		it1.cur->prev=p->next;
		n++;
	}
	void erase(iterator &it1)       //xoa tai it1
	{
		if(it1.cur==head) return pop_front();
		if(it1.cur==trail) return pop_back();
		node<T> *p=it1.cur->prev,*q=it1.cur->next;
		p->next=q;
		q->prev=p;
		delete it1.cur;
		n--;
	}
	void sort(bool tang=true)
	{
		for(node<T> *p=head;p!=NULL;p=p->next)
			for(node<T> *q=p->next;q!=NULL;q=q->next)
			if(p->elem>q->elem==tang) swap(p->elem,q->elem);
	}
};
int main()
{
	dlist<int> L;
	L.push_back(7);
	L.push_front(2);
	for(int i=1;i<=10;i++) i%2?L.push_front(i):L.push_back(i);
	cout<<"\nsize "<<L.size();
	cout<<"\nfront "<<L.front();
	cout<<"\nback "<<L.back();
	
	cout<<"\nL "; //L.travel();
	//for(dlist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	for(auto x:L) cout<<x<<" ";
	dlist<int>::iterator it1=L.begin();
	it1++;it1++;it1++;
	L.insert(it1,0);
	cout<<"\nL "; for(auto x:L) cout<<x<<" ";
	for(it1=L.begin();it1.cur->next;it1++);
	L.insert(it1,7);
	L.insert(L.begin(),4);
	L.push_back(8);
	cout<<"\nL "; for(auto x:L) cout<<x<<" ";
	it1=L.begin();
	it1++;it1++;it1++; it1++;
	L.erase(it1);
	cout<<"\nL "; for(auto x:L) cout<<x<<" ";
	L.sort(false);
	cout<<"\nL "; for(auto x:L) cout<<x<<" ";
	cout<<"\nL nguoc : ";
	for(dlist<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" ";
}

