#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int a, b;
	while (b){
		int r = a % b;
		a = b;
		b =r;
	}
	cout << a;
}


