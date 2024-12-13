#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T, class k = less <T>>
void insertion_sort(T *l, T *r, k cmp = less <T>()){
	for (T *i = l + 1 ; i < r ; i ++){
		T x = *i;
		T *j = i - 1;
		while (j >= l and cmp (x, *j)){
			*(j+1) = *j--;
		}
		*(j + 1) = x;
	}
}
main(){
	int a[]{12,434,22,2,4,2,4,6,7,8,6,5,4,4,54,5}, n=sizeof(a)/sizeof(n);
	insertion_sort(a, a+n);
	for (auto x : a) cout << x << ' ';
}


