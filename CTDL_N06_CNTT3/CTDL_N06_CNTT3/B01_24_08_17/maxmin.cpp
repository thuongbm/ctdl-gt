//Tichpx
#include<bits/stdc++.h>
using namespace std;


int fun(int x,int y,bool ok=true)
{
	return x>y==ok?x:y;
}

int main()
{
	cout<<fun(3,7,5)<<"\n";
	cout<<fun(3,7,0)<<"\n";
}

