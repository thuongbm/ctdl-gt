//Tichpx
#include<bits/stdc++.h>
using namespace std;

template <class T>
T bp(T x)
{
	return x*x;
}

int main()
{
	cout<<bp<float>(3)<<"\n";
	cout<<bp(3.5)<<"\n";
	complex<double> C(3,-2);
	cout<<bp(C);
}

