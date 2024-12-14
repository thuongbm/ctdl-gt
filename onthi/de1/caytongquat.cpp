#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
public:
    T Data;
    vector<Node<T>*> Child;

    // Đếm số nút có giá trị bằng x
    int Count(Node<T>* H, T x) {
        if (H == nullptr) return 0;

        int cnt = (H->Data == x) ? 1 : 0;  // Kiểm tra nút hiện tại
        for (Node<T>* child : H->Child) {
            cnt += Count(child, x);  // Đệ quy cho các nút con
        }
        return cnt;
    }

    // Tính chiều cao của cây
    int getHeight(Node<T>* node) {
        if (node == nullptr) return 0;

        int maxHeight = 0;
        for (Node<T>* child : node->Child) {
            maxHeight = max(maxHeight, getHeight(child));  // Đệ quy tìm chiều cao lớn nhất của các nhánh
        }
        return maxHeight + 1;  // Chiều cao là chiều cao lớn nhất cộng thêm nút hiện tại
    }
};

int main() {
    // Khởi tạo cây
    Node<int>* root = new Node<int>;
    root->Data = 1;

    Node<int>* node2 = new Node<int>;
    node2->Data = 2;

    Node<int>* node3 = new Node<int>;
    node3->Data = 3;

    Node<int>* node4 = new Node<int>;
    node4->Data = 4;

    Node<int>* node5 = new Node<int>;
    node5->Data = 5;

    Node<int>* node6 = new Node<int>;
    node6->Data = 6;

    // Xây dựng cây
    root->Child.push_back(node2);
    root->Child.push_back(node3);
    root->Child.push_back(node4);
    node2->Child.push_back(node5);
    node2->Child.push_back(node6);

    // Tính chiều cao của cây
    int height = root->getHeight(root);
    cout << "Chiều cao của cây là: " << height << endl;

    // Đếm số lượng nút có giá trị bằng 3
    int count = root->Count(root, 3);
    cout << "Số lượng nút có giá trị 3 là: " << count << endl;

    return 0;
}
