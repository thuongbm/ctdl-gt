#include <bits/stdc++.h>
#include "lophoc.cpp"
using namespace std;
using ll = long long;
int menu(){
	int select;
	cout << "\nmenu";
	cout << "\n1 danh sach ";
	cout << "\n2 xuat";
	cout << "\n3 dtb";
	cout << "\n4 thong ke";
	cout << "\n5 sx";
	cout << "\n6thoat";
	cout << "\nmoi chon mon";
	cin >> select;
	if (select && select < 6) return select;
	return menu();
}

main(){
	lophoc c;
	ifstream fin;
	do{
		int mn = menu();
		
		switch(mn){
			case 1: 
				fin.open("sinhvien.txt", ios::in);
				fin >> c;
				fin.close();
				break;
			case 2: cout << c;
					break;
			case 6: return 0;
			case 4:
				cout << "\nthong ke";
				c.thongke();
				break;
			case 3: cout << c.dtb();
		}
		system("pause");
	}
	while (1);
}


