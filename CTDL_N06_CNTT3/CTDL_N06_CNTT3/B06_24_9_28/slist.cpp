//Tichpx - cai dat danh sach lien ket don cai dat tren C+
#include<bits/stdc++.h>
using namespace std;




template <class T>
struct node
{
	T elem;
	node *next;
	node(T e=0,node<T> *N=0) {elem=e;next=N;}
};

template <class T>
struct slist_ite                      //bo lap xuoi 
{
	node<T> *cur;                     //node hien tai
	slist_ite(node<T>*c=0) {cur=c;}   //tao bo lap
	T &operator*() {return cur->elem;}
	bool operator!=(slist_ite<T> it1) {return cur!=it1.cur;}
	slist_ite<T> operator++(int)                //it++
	{
		cur=cur->next;
		return cur;      // slist_ite<T>(cur);
	}
	slist_ite<T> operator++()                //++it
	{
		slist_ite<T> it1=cur;
		cur=cur->next;
		return it1;
	}
};

template <class T>
struct slist
{
	node<T>*head,*trail;
	int n;
	slist() {head=trail=0;n=0;}
	~slist() {while(n) pop_front();}
	bool empty() {return n==0;}
	int size() {return n;}
	T &front() {return head->elem;}
	T &back() {return trail->elem;}
	void push_front(T x)
	{
		if(n==0) head=trail=new node<T>(x);
		else head=new node<T>(x,head);
		n++;
	}
	void push_back(T x)
	{
		if(n==0) head = trail=new node<T>(x);
		else trail=trail->next=new node<T>(x);
		n++;
	}
	void pop_front()
	{
		node<T>*p=head;
		head=head->next;
		delete p;
		n--;
		if(n==0) trail=0;
	}
	void pop_back()
	{
		if(n==1) return pop_front();
		else 
		{
			node<T>*p=head; 
			while(p->next!=trail) p=p->next;
			delete trail;
			trail=p;
			p->next=0;
			n--;
		}
	}
//	void travel()  //xuat
//	{
//		for(node<T>*p=head;p;p=p->next) cout<<p->elem<<" ";
//	}
	typedef slist_ite<T> iterator;
	iterator begin() {return head;}
	iterator end() {return NULL;}
	void insert(iterator it1,T x)  //chen vao it1
	{
		if(it1.cur==head) return push_front(x);
		if(it1.cur==NULL) return push_back(x);
		it1.cur->next=new node<T>(*it1,it1.cur->next);
		it1.cur->elem=x;
		n++;
		if(trail->next) trail=trail->next;
	}
	void erase(iterator &it1)       //xoa tai it1
	{
		if(it1.cur==head) return pop_front();
		if(it1.cur==trail) return pop_back();
		node<T> *p=head;
		while(p->next!=it1.cur) p=p->next;
		p->next=it1.cur->next;
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
	slist<int> L;
	L.push_back(7);
	L.push_front(2);
	for(int i=1;i<=10;i++) i%2?L.push_front(i):L.push_back(i);
	cout<<"\nsize "<<L.size();
	cout<<"\nfront "<<L.front();
	cout<<"\nback "<<L.back();
	
	cout<<"\nL "; //L.travel();
	//for(slist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	for(auto x:L) cout<<x<<" ";
	slist<int>::iterator it1=L.begin();
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
	
}

