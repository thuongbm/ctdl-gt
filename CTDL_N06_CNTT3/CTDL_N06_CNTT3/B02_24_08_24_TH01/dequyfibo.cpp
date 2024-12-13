//Tichpx
#include<bits/stdc++.h>
using namespace std;

//long long F[100]={};
map<int,long long> F;
long long Fib(int n)
{
	if(F[n]>0) return F[n];
	return F[n]=n<2?1:Fib(n-1)+Fib(n-2);
}


int main()
{
	for(int i=0;i<93;i++) cout<<i<<" "<<Fib(i)<<"\n";
}

