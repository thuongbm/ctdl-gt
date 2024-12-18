#include <bits/stdc++.h>
using namespace std;
template <class T, class K>
void Merge(T *a, T l, T m, T r, K cmp){
    vector<T> x(a + l, a + m + 1);    
    vector<T> y(a + m + 1, a + r + 1); 

    int i = 0, j = 0; 
    T k = l;          

    while (i < x.size() && j < y.size()) {
        if (cmp(x[i], y[j])) {
            a[k++] = x[i++];
        } else {
            a[k++] = y[j++];
        }
    }

    while (i < x.size()) {
        a[k++] = x[i++];
    }

    while (j < y.size()) {
        a[k++] = y[j++];
    }
}

template <class T, class K = less <T>>
void MergeSort(T *a, T l, T r, K cmp = K()){
    if (l >= r) return;
    T m = (l + r) / 2;
    MergeSort(a, l, m, cmp);
    MergeSort(a, m + 1, r, cmp);
    Merge(a, l, m, r, cmp);
}

int main(){
int arr[] = {5, 2, 9, 1, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);
    cout << "Mang sap xep tang dan: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    MergeSort(arr, 0, n - 1, greater<int>());
    cout << "Mang sap xep giam dan: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}