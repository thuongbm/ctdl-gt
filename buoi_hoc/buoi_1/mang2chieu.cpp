#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void nhap (int &n, int &m, int **&a){
	cin >> n >> m;
	a = new int *[n];
	for (int i = 0; i < n; i++){
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}
void xuat (int n, int m, int **a){
	for (int i = 0; i < n; i++){
		cout << endl;
		for (int j = 0; j < m; j++){
			cout << setw(3) << a[i][j];
		}
	}
}
void free (int n, int **a){
	for (int i = 0; i < n; i++){
		delete []a;
	}
}
main(){
	int n, m, **a;
	nhap (n, m, a);
	xuat (n, m, a);
	free (n, a);
}


