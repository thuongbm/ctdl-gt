//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(b)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	cout<<a;
}

