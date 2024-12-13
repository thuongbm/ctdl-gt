//Tichpx - quan ly sinh vien bang vector
#include<bits/stdc++.h>
using namespace std;

class sv
{
	public:
	string ten;
	int tuoi,diem;
	sv(string t="",int a=0,int m=0) {ten=t;tuoi=a;diem=m;};
};

istream &operator>>(istream &is,sv &s)
{
	getline(is,s.ten);
	is>>s.tuoi>>s.diem;
	return is;	
}
ostream &operator<<(ostream &os,sv s)
{
	os<<setw(30)<<s.ten<<"  |  "<<setw(3)<<s.tuoi<<" | "
	<<setw(10)<<s.diem;
	return os;
}

bool ss(sv a,sv b)
{
	return a.tuoi>b.tuoi;
}

