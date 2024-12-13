//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;									//1
	double x,s=0;                           //3
	cin>>n>>x;                              //2
	for(int i=1;i<=n;i++) s+=x*(x-i);       //2+n*5  +1
	
	for(int i=2;i<=100;i++) s*=i/x;         //2+ 99*4  +1     
	
	for(int i=0;i<=n+1;i+=3) s+=i*(x-2);       //2+6(n+2)/3  +2
	
	for(int i=n;i>0;i-=4) s/=i;                //2+3(n/4) +1
	
	for(int i=1;i*i<=n+1;i++) s+=2;            //2+ 5*sqrt(n+1)        +3
	
	for(int i=1,j=1;i<=n;i*=2,j++) s+=i*j/x;   //4+ 6log2(n)          +1
	
	for(int i=n;i>0;i/=2) s+=i*i;              //2+4log2(n)+1
	cout<<s;
	
}

