//Tichpx
#include<bits/stdc++.h>
#include"sinhvien.cpp"

using namespace std;

class lophoc
{
	public:
	vector<sv> Lop;
	double dtb()
	{
		int t=0;
		for(auto s:Lop) t+=s.diem;
		return Lop.size()?t/Lop.size():0;
	}
	void thongke()
	{
		map<int,int> M;
		for(auto s:Lop) M[s.tuoi]++;
		for(auto m:M) cout<<"\ntuoi "<<m.first<<" co "<<m.second<<" sinh vien ";
	}
};

istream &operator>>(istream &is,lophoc &L)
{
	int n;
	is>>n;
	for(int i=1;i<=n;i++)
	{
		sv s;
		is.ignore(1);
		is>>s;
		L.Lop.push_back(s);
	}
	return is;
}
ostream &operator<<(ostream &os,lophoc L)
{
	for(auto s:L.Lop) os<<s<<"\n";
	return os;
}



