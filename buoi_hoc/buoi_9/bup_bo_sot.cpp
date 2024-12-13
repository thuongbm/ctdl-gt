#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T, class k = less<T>>
void bubble(T *l, T *r, k cmp = less<T>()){
	for (T *i = l ; i < r ; i++){
		for (T *j = r -1 ; j > l ; j--){
			if (cmp(*j, *(j-1))) swap(*j, *(j - 1));
		}
	}
}
bool ss(int a, int b){
	return a%2==b%2?a<b:a%2<b%2;
}
main(){
	int a[]{12,434,22,2,4,2,4,6,7,8,6,5,4,4,54,5}, n=sizeof(a)/sizeof(n);
	bubble(a, a+n, ss);
	for (auto x : a) cout << x << ' ';
}


