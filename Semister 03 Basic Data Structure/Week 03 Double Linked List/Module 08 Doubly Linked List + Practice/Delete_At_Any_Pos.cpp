#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// print
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Delete Between Head and Tail
void delete_at_any_pos(Node *head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

int main()
{
    // Creating Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // Connection
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, 1);
    print_forward(head);
    return 0;
}