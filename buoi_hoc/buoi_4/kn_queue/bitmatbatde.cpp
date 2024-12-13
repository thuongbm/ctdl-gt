#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= k; i++) {
        q.push(i);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        q.pop();
    }
    cout << q.front() << endl;
    return 0;
}

