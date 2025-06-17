#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    ~Node()
    {
        // Destructor to free memory allocated for the node
        int value = this->data;
        if (this->next != nullptr)
        {
            delete next;
            this->next = nullptr;
        }
    }
};

void insertNode(Node *&tail, int element, int data)
{
    // assuming that the element is present in the list
    if (tail == nullptr)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // Point the next of new node to itself
        return;
    }
    else
    {
        // non-empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // Create a new node
        Node *temp = new Node(data);
        temp->next = curr->next; // Point new node's next to curr's next
        curr->next = temp;       // Point curr's next to new node
    }
}
void deleteNode(Node* &tail, int element)
{
    if (tail == nullptr)
    {
        cout << "List is empty, cannot delete" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = tail->next;
        // Find the node to delete
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
            // If we have traversed the whole list and not found the element
            if (curr == tail->next)
            {
                cout << "Element " << element << " not found in the list." << endl;
                return;
            }
        }
        // If only one node in the list
        if (curr == prev)
        {
            tail = nullptr;
        }
        else
        {
            prev->next = curr->next;
            // If deleting the tail node, update tail
            if (curr == tail)
            {
                tail = prev;
            }
        }
        curr->next = nullptr;
        delete curr;
    }
}
void printList(Node *tail)
{
    if (tail == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = tail->next; // Start from the node next to tail
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next); // Loop until we come back to the start
    cout << "(back to start)" << endl;
}
int main()
{
    // Create a circular linked list
    Node *tail = nullptr;
    insertNode(tail, 0, 10);   // Create list with 10 (element ignored since list is empty)
    insertNode(tail, 10, 20);  // Insert 20 after 10
    insertNode(tail, 20, 35);  // Insert 35 after 20
    insertNode(tail, 35, 11);  // Insert 11 after 35
    insertNode(tail, 11, 13);  // Insert 13 after 11
    insertNode(tail,35, 14); // Insert 14 after 35
    insertNode(tail, 13, 15);  // Insert 15 after 13
    printList(tail);           // Print the list
    deleteNode(tail, 13);      // Delete node with data 20
    printList(tail);           // Print the list after deletion
    return 0;
}