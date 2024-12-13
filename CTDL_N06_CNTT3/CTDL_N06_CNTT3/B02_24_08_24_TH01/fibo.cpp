//Tichpx
//Fibonacci
//F[0]=F[1]=1;
//F[n]=F[n-1]+F[n-2]

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//fast io C++
	int n;											//1
	cin>>n;											//1
	long F[n+5]={1,1};								//6 gom         1(long F), 1 (+)  2(F[0]=1)  2(F[1]=1)
	int i=2;                                        //2     int,=
	for(;i<=n;i++) F[i]=F[i-1]+F[i-2];              //9(n-1) + 1
	cout<<F[n];                                     //2
}
//Dpt Khong gian 
//K(n) = sizeof(n) + sizeof(F) +sizeof(i) = 4+8(n+1)+4 = 8n+16
//Dpt Thoi gian
//T(n)  = 1+1+6+2+9(n-1)+1+2 = 9n+4















