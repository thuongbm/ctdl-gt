//Tichpx
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//set<int> S;         //cai dat cay nhi phan can bang  -> O(logn) 
	unordered_set<int> S;  //cai dat bang bang bam         -> O(1) 
	//set<int,greater<int>> S;
	for(int x:{4,7,2,8,4,8,3,2}) S.insert(x);
	
	for(int x:S) cout<<x<<" ";
}

