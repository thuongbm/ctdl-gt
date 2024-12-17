#include <bits/stdc++.h>
using namespace std;
template <class T, class K>
T myPartition(T *a, T l, T r, K cmp){
    T privot = *(a + r);
    T i = l - 1;
    for (T j = l ; j < r ; j++){
        if (cmp(*(a + j), privot)){
            i++;
            swap(*(a + i), *(a + j));
        }
    }

    i++;
    swap(*(a + i), *(a + r));
    return i;
}

template <class T, class K = less <T>>
void QuickSort(T *a, T l, T r, K cmp = K()){
    if (l >= r) return;
    T p = myPartition(a, l ,r, cmp);
    QuickSort(a, l ,p - 1, cmp);
    QuickSort(a, p + 1, r, cmp);
}
int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Sắp xếp giảm dần bằng comparator greater<int>
    QuickSort(arr, 0, n - 1, greater<int>());

    cout << "Array after sorting (descending): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Sắp xếp tăng dần bằng comparator less<int> (mặc định)
    QuickSort(arr, 0, n - 1, less<int>());

    cout << "Array after sorting (ascending): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}