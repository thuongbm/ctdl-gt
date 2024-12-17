#include <bits/stdc++.h>
using namespace std;
int count (int *a, int n){ // 2 - khai bao ham *a, n
    int k = 0; // 2 - khai bao, gan gia tri
    int i = 1; // 2 - khai bao, gan gia tri
    for (; i <= n ; i++){ // 2 * n
        for (int j = i + 1 ; j <= n ; j++){ // 2 * n * (n - 2) / 2
            if ((a[i] + a[j]) % 2 == 0 && a[i] > a[j]){ // 9 * n * (n - 2) / 2
                k++; // n * (n - 2) / 2
            }
        }
    return k; // 1
    // tong la 2 + 2 + 2 + 2 * n + 2 * n * (n - 2) / 2 + 9 * n * (n - 2) / 2 + n * (n - 2) / 2 = o(n^2)
}