#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int maxmin(int a, int b, int c, int &Max, int &Min){
	Max = a;
	Min = a;
	if (Max < b) Max = b;
	if (Max < c) Max = c;
	if (Min > b) Min = b;
	if (Min > c) Min = c;   
}
main(){
	int a, b, c, Max, Min;
	cin >> a >> b >> c;
	maxmin(a, b, c, Max, Min);
	cout << Max << ' ' << Min;
}


