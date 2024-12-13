#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void bp (int x ,int &y){
	y = x*x;
}
main(){
	int x;
	x = 12;
	int &y = x; // y la bi danh cua x
	cout << "bien x co dia chi " << &x << " chua thong tin " << x << endl;
	cout << "bien y co dia chi " << &y << " chua thong tin " << y << endl;
	// dung bi danh de thay doi bien
	int a, b;
	bp(a, b);
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
