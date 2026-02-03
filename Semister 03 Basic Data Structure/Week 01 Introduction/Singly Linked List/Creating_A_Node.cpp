#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = next;
    }
};
int main()
{
    Node a(10), b(20), c(300);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    // cout << (*a.next).val << endl;
    // Shortcut Dereference and Access
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}