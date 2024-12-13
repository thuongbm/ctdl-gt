#include <bits/stdc++.h>
using namespace std;
template <class T>
class Queue{
private:	
	int n, f, l, cap;
	int data;
	T *buf;
public:
	Queue(){
		cap = n = data = l = f = 0;
		buf = NULL;
	}
	~Queue(){
		if (buf) delete [] buf;
	}
	int size(){
		return n;
	}
	bool empty(){
		if (n) return false;
		else return true;
	}
};
main(){
	
}
