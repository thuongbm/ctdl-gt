#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifndef __queue__opp__
#define __queue__cpp__
template <class t>
struct Queue{
	int cap, n,f,l; //cap-capacity, n size, f - first, l -1 - last
	t *buff;
	Queue(){ //tao queue rong
		n=cap=f=l=0;
		buff=NULL;
	}
	~Queue(){
		if (buff) delete []buff;
	}
	bool empty(){
		return n==0;
	}
	int size(){
		int n;
	}
	t front(){
		return buff[f];
	}
	t back(){
		return buff[(l?l:cap)-1];
	}
	void pop(){
		f=(f+1)%cap;
		n--;
	}
	void push(t x){
		if (n==cap){
			cap=cap?cap*2:1;
			t *temp=buff;
			buff = new t[cap];
			for (int i=f, j=0; i<f+n;i++){
				buff[j++]=temp[i%n];
			}
			if (temp) delete[]temp;
			f=0;
			l=n;
		}
		buff[l]=x;
		l=(l+1)%cap;
		n++;
	}
};
#endif

