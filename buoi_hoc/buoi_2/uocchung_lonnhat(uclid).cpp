#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	B1:
		int a,b;
		cin >> a >> b;
	B2:	
		if (a != b ){
			a > b ? a -= b : b-= a;
			goto B2;
		}
	B3:
		cout << a;	
}


