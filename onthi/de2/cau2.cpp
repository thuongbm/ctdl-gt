#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node{
    T ele;
    Node* next;  // Con trỏ chỉ đến phần tử tiếp theo
public:
    Node(T value) : ele(value), next(nullptr) {} // Constructor khởi tạo
    T getElement() { return ele; }
    Node* getNext() { return next; }
    void setNext(Node* nextNode) { next = nextNode; }
};

template <class T>
class Slist {
    int n;  // Số lượng phần tử trong danh sách
    Node<T>* Head;
    Node<T>* Tail;
public:
    Slist() : n(0), Head(nullptr), Tail(nullptr) {}

    void Erase(T x) {
        if (n == 0) return;

        // Xóa phần tử ở đầu danh sách
        if (Head->getElement() == x) {
            Node<T>* temp = Head;
            Head = Head->getNext();
            delete temp;
            n--;
            if (n == 0) {
                Tail = nullptr;
            }
            return;
        }

        // Tìm phần tử cần xóa
        Node<T>* temp = Head;
        while (temp->getNext() != nullptr && temp->getNext()->getElement() != x) {
            temp = temp->getNext();
        }

        // Nếu tìm thấy phần tử cần xóa
        if (temp->getNext() != nullptr) {
            Node<T>* deleteNode = temp->getNext();
            temp->setNext(temp->getNext()->getNext());
            delete deleteNode;
            n--;
            if (temp->getNext() == nullptr) {
                Tail = temp;
            }
        }
    }

    // Hàm thêm phần tử vào danh sách
    void Add(T x) {
        Node<T>* newNode = new Node<T>(x);
        if (n == 0) {
            Head = Tail = newNode;
        } else {
            Tail->setNext(newNode);
            Tail = newNode;
        }
        n++;
    }

    // Hàm in danh sách
    void Print() {
        Node<T>* temp = Head;
        while (temp != nullptr) {
            cout << temp->getElement() << " ";
            temp = temp->getNext();
        }
        cout << endl;
    }
    
    //Hàm thêm phân tử vào đầu
    void PushFront(T x){
        Head = new Node<T> (x, Head);
        if (num == 0){
            Tail = Head;
        }
        n++;
    }
};

int main() {
    Slist<int> list;
    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Add(4);
    
    cout << "Before erase:" << endl;
    list.Print();

    list.Erase(3);
    cout << "After erase:" << endl;
    list.Print();

    return 0;
}
