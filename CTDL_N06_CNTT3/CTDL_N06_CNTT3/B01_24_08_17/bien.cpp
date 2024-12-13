//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	x=12;
	int &y=x;   //y la bi danh cua x chung vung nho
	int &z=y;
	cout<<"\nBien x co dia chi "<<&x<<" chua thong tin "<<x;
	cout<<"\nBien y co dia chi "<<&y<<" chua thong tin "<<y;
}

