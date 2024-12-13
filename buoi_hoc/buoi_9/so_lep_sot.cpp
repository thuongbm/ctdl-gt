#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T, class k = less<T>>
void select_sort(T *l, T*r, k cmp = less<T>()){
	for (T *i = l ; i < r ; i++){
		T *p = i;
		for (T *j = i + 1 ; j < r ; j++){
			if (cmp (*j, *p)) p = j;
		}
		swap(*i, *p);
	}
}
bool ss(int a, int b){
	return a%2==b%2?a<b:a%2<b%2;
}
main(){
	int a[]{12,434,22,2,4,2,4,6,7,8,6,5,4,4,54,5}, n=sizeof(a)/sizeof(n);
	select_sort(a, a+n, ss);
	for (auto x : a) cout << x << ' ';
}


