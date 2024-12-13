//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//int fun(int a = 4, int b = 6){
//	return a * b;
//}
//main(){
//	cout << fun (3, 7) << endl;
//	cout << fun () << endl;
//	cout << fun (5) << endl;
//}
//
#include <bits/stdc++.h>
using namespace std;
int fun (int x, int y, bool ok = true){
	return x > y == ok ? x : y;
}
main(){
	cout << fun (3, 5, 7) << endl;
	cout << fun (3, 7, 0) << endl;
}
