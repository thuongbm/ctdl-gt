//Tichpx
#include<bits/stdc++.h>
using namespace std;

long gt(int n)
{
	return n?n*gt(n-1):1;
}

int main()
{
	cout<<gt(10)<<"\n";
	cout<<gt(7)<<"\n";
}

