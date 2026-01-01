#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int val;

    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node *current = head;
    while (current != nullptr)
    {
        Node *runner = current;
        while (runner->next != nullptr)
        {
            if (runner->next->data == current->data)
            {
                Node *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}