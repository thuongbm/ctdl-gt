#include <bits/stdc++.h>
using namespace std;
template <class T, class K>
void Heapify(T *a, T n, T i, K cmp){
    T l = i * 2 + 1;
    T r = i * 2 + 2;
    T largest = i;
    if (l < n && cmp(*(a + largest), *(a + l))){
        largest = l;
    }
    if (r < n && cmp(*(a + largest), *(a + r))){
        largest = r;
    }
    if (largest != i){
        swap(*(a + largest), *(a + i));
        Heapify(a, n, largest, cmp);
    }
}

template <class T, class K = less <T>>
void HeapSort(T *a, T n, K cmp = K()){
    for (int i = n / 2 - 1 ; i >= 0 ; i--){
        Heapify(a, n, i, cmp);
    }

    for (int i = n - 1 ; i >= 0 ; i--){
        swap(*(a + i), *(a + 0));
        Heapify(a, i, 0, cmp);
    }
}

int main(){
int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sắp xếp tăng dần
    HeapSort(arr, n);
    cout << "Array after sorting (descending): ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Sắp xếp giảm dần
    HeapSort(arr, n, greater<int>());
    cout << "Arry after sorting (ascending): ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}