//Tichpx
#include<bits/stdc++.h>
using namespace std;

void hv(int &a,int &b)
{
	a^=b;   //10 7
	b^=a;   //10 3
	a^=b;   //7 3
}

int main()
{
	int a=3,b=7;
	hv(a,b);
	cout<<a<<" "<<b;
}

