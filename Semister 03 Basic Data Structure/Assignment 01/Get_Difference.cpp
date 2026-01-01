#include <iostream>
using namespace std;

struct Node {
    long long data;
    Node* next;
    Node(long long val) : data(val), next(nullptr) {}
};

int main() {
    Node* head = nullptr, *tail = nullptr;
    long long val;

// Input
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    if (!head) {
        cout << 0 << endl;
        return 0;
    }

    long long maxVal = head->data, minVal = head->data;
    Node* curr = head->next;

    while (curr) {
        if (curr->data > maxVal) maxVal = curr->data;
        if (curr->data < minVal) minVal = curr->data;
        curr = curr->next;
    }

    cout << maxVal - minVal << endl;

//  Free Space
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}