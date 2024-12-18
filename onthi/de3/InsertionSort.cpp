#include <bits/stdc++.h>
using namespace std;
template <class T, class K = less <T>>
void InsertionSort(T *a, T n, K cmp = K()){
    for (T i = 1 ; i < n ; i++){
        T x = *(a + i), pos = i - 1;
        while(pos >= 0 && cmp(x, *(a + pos))){
            *(a + (pos + 1)) = *(a + pos);
            pos--;
        }
        *(a + (pos + 1)) = x;
    }
}

template <class T, class K = less <T>>
void SelectionSort(T *a, T n, K cmp = K()){
    for (T i = 0 ; i < n - 1 ; i++){
        T min_pos = i;
        for (T j = 1 + i ; j < n ; j++){
            if (cmp(*(a + j), *(a + min_pos))){
                min_pos = j;
            }
        }
        swap(*(a + i), *(a + min_pos));
    }
}
int main(){
int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Sử dụng hàm InsertionSort để sắp xếp tăng dần
    InsertionSort(arr, n);
    cout << "Array after Insertion Sort (ascending): ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Sử dụng hàm SelectionSort để sắp xếp giảm dần
    SelectionSort(arr, n, greater<int>());
    cout << "Array after Selection Sort (descending): ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}