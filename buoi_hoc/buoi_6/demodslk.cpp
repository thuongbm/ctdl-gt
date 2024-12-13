#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	list <int> l;//tao list rong
	list <int> (3,5);
	for (int i = 0; i < 10; i++){
		i%2 ? l.push_front(i): l.push_back(i);
	}
	cout << "\nl: ";
	for (list <int> :: iterator it = l.begin(); it != l.end(); it++){
		cout << *it << ' ';
	}
	cout << "\nl: ";
	for (list <int> :: reverse_iterator it = l.rbegin(); it != l.rend(); it++){
		cout << *it << ' ';
	}
	l.pop_front();
	l.pop_back();
	l.front() = 30;
	l.front() = 20;
	cout << "\nl: "; for (auto x: l) cout << x << " ";
	l.sort();
	cout << "\nl: "; for (auto x:l) cout << x << ' ';
	auto it = l.begin(); it++; it++; it++;
	l.erase(it);
	cout << "\nl: "; for (auto x: l ) cout << x << ' ';
	it = l.begin(); it++; it++; it++;
	l.insert(it, -2);
	cout << "\nl: "; for (auto x: l ) cout << x << ' ';
	return 0;
	
}


