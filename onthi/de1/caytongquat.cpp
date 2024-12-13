#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
public:
    T Data;
    vector<Node<T>*> Child;

    void Count(Node<T>* H, T x) {
        if (H == nullptr) return;
        int cnt = 0;
        if (H->Data == x) cnt++;  
        for (Node<T>* child : H->Child) {
            Count(child, x);  
        cout << "Số lượng nút có giá trị " << x << " là: " << cnt << endl;
    }

    void getHeight(Node<T>* node, int currentHeight = 1, int& maxHeight = 0) {
        if (node == nullptr) return;

        maxHeight = max(maxHeight, currentHeight);

        for (Node<T>* child : node->Child) {
            getHeight(child, currentHeight + 1, maxHeight); 
        }
    }
};

int main() {

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

    root->Child.push_back(node2);
    root->Child.push_back(node3);
    root->Child.push_back(node4);
    node2->Child.push_back(node5);
    node2->Child.push_back(node6);

    int maxHeight = 0;
    root->getHeight(root, 1, maxHeight);
    cout << "Chiều cao của cây là: " << maxHeight << endl;

    root->Count(root, 3);

    return 0;
}
