//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={4,7,2,8,4,8,3,2},n=sizeof(a)/sizeof(int);
	sort(a,a+n,greater<int>());
	for(auto x:a) cout<<x<<" ";
}

