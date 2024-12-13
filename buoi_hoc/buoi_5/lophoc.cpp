#include <bits/stdc++.h>
#include "sinhvien.cpp"
using namespace std;
using ll = long long;
class lophoc{
public:
	vector <sv> lop;
	double dtb(){
		int t = 0;
		for (auto s : lop) t += s.diem;
		return lop.size();
//		t/lop.size():0;
	}
	void thongke(){
		map <int, int> m;
		for (auto s : lop){
			m[s.tuoi]++;
		}
		for (auto x : m){
			cout << "\ntuoi " << x.first << "co " << x.second << "sinh vien ";
		}
	}
};
istream &operator >> (istream &is, lophoc &l){
	int n;
	is >> n;
	for (int i = 1 ; i < n ; i++){
		sv s;
		is.ignore(i);
		is >> s;
		l.lop.push_back(s);
	}
	return is;
}
ostream &operator << (ostream &os, lophoc l){
	for (auto x : l.lop){
		os << x << '\n';
	}
	return os;
}



