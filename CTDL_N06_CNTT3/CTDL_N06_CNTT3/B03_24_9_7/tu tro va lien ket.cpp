//Tichpx - tu tro va  danh sach lien ket
#include<bits/stdc++.h>
using namespace std;


struct person        //cau truc tu tro
{
	string ten;
	int tuoi;
	person *bo,*me;   //dia chi 8 byte so nguyen 
	//chu y cau truc de quy bat buoc du lieu phai la con tro
};


signed main()
{
	cout<<sizeof(person);
}

