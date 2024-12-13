#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void swap(int &a, int &b){
	a ^= b;
	b ^= a;
	a ^= b;
}
main(){
	int a = 7, b = 3;
	swap (a, b);
	cout << a << ' ' << b;
}


