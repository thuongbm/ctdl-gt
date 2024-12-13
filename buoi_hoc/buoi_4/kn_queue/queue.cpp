#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    queue<int> q;
    for (int x : {7, 4, 2, 8, 3}) {
        q.push(x);
    }

    // Print size and front element
    cout << "size " << q.size() << endl;
    cout << "front " << q.front() << endl;

    // Print and pop elements from the queue
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();  // Remove the element from the front after printing
    }

    return 0;
}

