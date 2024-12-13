#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	vector <int> v; //khai bao vector rong
	vector <int> b(10); //khai bao 10 ptu, chua xac dinh ro
	vector <int> c(5,3); //3 3 3 3 3
	vector <int> d(b.begin(), b.end()); //d = b
	vector <int> e =c;
	int x[] = {4, 7, 2, 5,3 ,3 ,5};
	vector <int> f(x+2, x+5);
	for (vector <int> :: iterator it = f.begin(); it != f.end(); it++){
		cout << *it << ' ';
	} 
	cout << "\nduyet nguoc\n";
	for (vector <int> :: reverse_iterator it = f.rbegin(); it != f.rend(); it++){
		cout << *it << ' ';
	} 
	cout << endl;
	c.resize(7,2);
	for (auto x :c){
		cout << x << ' ';
	}
	c.push_back(7);
	c.push_back(9);
	cout << "\nc: ";
	for (auto x :c){
		cout << x << ' ';
	}
	cout << "\n size c" << c.size();
	cout << "\n cap c" << c.capacity();
	cout << "\nc.front " << c.front();
	cout << "\n f: "; 
	for (int i = 0; i < f.size(); i++){
		cout << f[i];
	}
	cout << endl;
	f.insert(f.begin()+2, -5);
	for (int i = 0; i < f.size(); i++){
		cout << f[i] << ' ';
	}
	cout << endl;
	f.erase(f.begin()+3);
	for (int i = 0; i < f.size(); i++){
		cout << f[i] << ' ';
	}
}



