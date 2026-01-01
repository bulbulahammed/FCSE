#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
    Node(int val)
    {
        value = val;
        next = nullptr;
    }
};

void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int numberOfQueries;
    cin >> numberOfQueries;

    Node *head = nullptr;
    Node *tail = nullptr;

    for (int i = 0; i < numberOfQueries; i++)
    {
        int operationType, value;
        cin >> operationType >> value;
        if (operationType == 0)
        {
            Node *newNode = new Node(value);
            if (head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }
        }

        else if (operationType == 1)
        {
            Node *newNode = new Node(value);
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
        else if (operationType == 2)
        {
            int positionToDelete = value;
            if (head == nullptr || positionToDelete < 0)
            {
                printList(head);
                continue;
            }
            if (positionToDelete == 0)
            {
                Node *nodeToDelete = head;
                head = head->next;
                delete nodeToDelete;
                if (head == nullptr)
                {
                    tail = nullptr;
                }
            }
            else
            {
                Node *current = head;
                int currentPosition = 0;
                while (current != nullptr && currentPosition < positionToDelete - 1)
                {
                    current = current->next;
                    currentPosition++;
                }
                if (current == nullptr || current->next == nullptr)
                {
                    printList(head);
                    continue;
                }

                Node *nodeToDelete = current->next;
                current->next = nodeToDelete->next;
                delete nodeToDelete;

                if (current->next == nullptr)
                {
                    tail = current;
                }
            }
        }
        printList(head);
    }

    return 0;
}