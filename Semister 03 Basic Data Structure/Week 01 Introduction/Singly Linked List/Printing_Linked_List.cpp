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
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // Print Without Loop
    //  cout << head->val << endl;
    //  cout << head->next->val << endl;
    //  cout << head->next->next->val << endl;
    //  cout << head->next->next->next->val << endl;

    // Print With Loop
    Node *temphead = head;
    while (temphead != NULL)
    {
        cout << temphead->val << endl;
        temphead = temphead->next;
    }
    temphead = head;
    while (temphead != NULL)
    {
        cout << temphead->val << endl;
        temphead = temphead->next;
    }
    return 0;
}