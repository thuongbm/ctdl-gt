#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifndef stack__cpp
#define stack__cpp
template <class T>
class Stack{
	int num, cap;
	T *ele;
	public:
		Stack(){
			num = cap = 0;
			ele = NULL;
		}
		int size(){
			return num;
		}
		bool empty(){
			return num == 0;
		}
		T &top(){
			return ele[num - 1];
		}
		void pop(){
			num --;
		}
		void push(T x){
			if ( cap == num ){
				cap = cap ? cap * 2 : 1;
				T *tem = new T[cap];
				for (int i = 0 ; i < num ; i++){
					tem [i] = ele[i];
				}
				if (ele) delete []ele;
				ele = tem;
			}
			ele [num++] = x;
		}
		void clear(){
			num = 0;
		}
};
#endif
main(){

}


