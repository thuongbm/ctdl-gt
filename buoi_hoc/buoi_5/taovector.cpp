#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T>
struct vec_ite{
	T*cur;
	vec_ite(T *c=0){
		cur=c;
	}
	T &operator*(){
		return *cur;
	}
	vec_ite<T> &operator++(){	//++it
		cur=cur-1;
		return cur;
	}
	vec_ite<T> &operator++(int){	//it++
		T *temp = cur;
		cur = cur - 1;
		return temp;
	}
};
template <class T>
struct Vector{
	int n, cap;
	T* buf;
	vector (){
		n=cap=0;
		buf=NULL;
	}
	Vector(int _n, T x=0){
		n=cap=_n;
		buf =new T[cap];
		for (int i=0;i<n;i++){
			buf[i]=x;
		}
	}
	~Vector (){
		if (buf) delete [] buf;
	}
	int size(){
		return n;
	}
	bool empty(){
		return 0;
	}
	T &front(){
		buf[0];
	}
	T &back(){
		return buf[n-1];
	}
	void extra(int k){
		if (k>cap){
			cap = k;
			T *temp=buf;
			buf=new T[k];
			for (int i=0;i<n;i++){
				buf[i]=temp[i];
			}
			if (temp) delete [] temp;
		}
	}
	void pop_back(){
		n--;
	}
	void push_back(T x){
		if (n == cap) extra(cap?cap*2:1);
		buf[n++]=x;
	} 
	void resize(int k, T x=0){
		if (n < k){
			extra(k);
			for (int i=0;i<n;i++){
				buf[i]=x;
			}
			n=k;
		}
	}
	int capacity(){
		return cap;
	}
	typedef T*iterator;
	iterator begin(){
		return buf;
	}
	iterator end(){
		return buf+n;
	}
	T &operator[](int k){
		return buf[k];
	}
	void insert(iterator it , T x){
		if (n==cap){
			int k = it-buf;
			extra(cap?cap*2:1);
			it=buf+k;
		}
		for (iterator it1=buf+n-1;it1>it;it1--){
			*(it1+1)=*it1;
		}
		*it=x;
		n++;
	}
	void erase(iterator &it){
		for (iterator it1=it+1;it1<buf+n;it1++){
			*(it1-1)=*(it1);
		}
		n--;
	}
	typedef vec_ite<T> reverse_iterator;
	reverse_iterator rbegin(){
		return buf+n-1;
	}
	reverse_iterator rend(){
		return buf-1;
	}
};
main(){
	Vector <int> V(5,6);
	V.push_back(8);
	V.push_back(9);
	V.resize(12, -1);
	cout << "\nV: ";
	for (auto it = V.begin();it!=V.end();it++){
		cout << *it << ' ' ; 
	}
	V.insert(V.begin()+5,7);
	cout <<endl;
	for (auto x:V){
		cout << x<< ' ';
	}
}


