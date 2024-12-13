//Tichpx
#include<bits/stdc++.h>
using namespace std;

double mypow(double x,int n)      //O(n)
{
	return n==0?1:x*mypow(x,n-1);
}

double my_pow(double x,int n)     //O(logn)
{
	if (n==0) return 1;
	if (n==1) return x;
	double t=my_pow(x,n/2);
	return n%2?t*t*x:t*t;
	// return my_pow(x,n/2)*my_pow(x,n-n/2);             =>O(n)
}




int main()
{
	cout<<mypow(2,10)<<"\n";
	cout<<my_pow(2,10)<<"\n";
}

