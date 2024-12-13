#include<bits/stdc++.h>

using namespace std;

signed main()
{
    int n, k, res = 0;
    cin >> n >> k;
    int a[n];
    for(int &x:a)   cin >> x;
    sort(a, a + n, greater<int>());
    queue<int> Q;
    for(int x:a){
        Q.push(x);
        if(Q.front() >= k + x)  Q.pop();
        else res += x;
    }
    cout << Q.size() << " "<< res;
    return 0;
}

