//Tichpx
#include<bits/stdc++.h>
#include"lophoc.cpp"
using namespace std;

int menu()
{
	int select;
	cout<<"\nMENU";
	cout<<"\n1. Nhap sinh vien tu file";
	cout<<"\n2. Xuat ds sinh vien";
	cout<<"\n3. Tinh diem trung binh";
	cout<<"\n4. Thong ke theo tuoi";
	cout<<"\n5. Sap xep theo diem giam dan";
	cout<<"\n6. Thoat";
	cout<<"\nmoi ban chon mon : ";
	cin>>select;
	if(1<=select && select<=6) return select;
	return menu();
} 

int main()
{
	lophoc C;
	fstream fin;
	do
	{
		int mn=menu();
		system("cls");   //xoa man hinh
		switch(mn)
			{
				case 1: //cin>>C; break;
						fin.open("sv.txt",ios::in);
						fin>>C;
						fin.close();
						break;	
				case 2: cout<<C; break;
				case 6: return 0;
				case 3: 
						cout<<"\nThong ke do tuoi ";
						C.thongke();
						break;
				case 4:
						cout<<"\nDiem trung binh "<<C.dtb();
				case 5:
						sort(C.Lop.begin(),C.Lop.end(),ss); 
						break;
			}
			system("pause");
	}while(1);
	
}

