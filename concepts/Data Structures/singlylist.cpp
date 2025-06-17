#include <iostream>
using namespace std;

class Node
{ // Node class to represent each node in the linked list
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

void insertAtHead(Node *&head, int data)
{ // Function to insert a new node at the head of the linked list
    // If the list is empty, create a new node and set it as head
    // create a new node
    Node *temp = new Node(data);
    // point the next of new node to head
    temp->next = head;
    head = temp; // update head to point to new node
}
void insertAtTail(Node *&tail, int data)
{ // Function to insert a new node at the tail of the linked list
    // If the list is empty, create a new node and set it as head
    // create a new node
    Node *temp = new Node(data);
    tail->next = temp; // point the next of tail to new node
    // tail = tail->next; //update tail to point to new node
    tail = temp; // update tail to point to new node
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // If the position is 1, insert at head
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    // insert at position greater than 1
    Node *temp = head;
    int count = 1;
    while (count < position - 1 && temp != nullptr)
    {

        temp = temp->next;
        count++;
    }
    // Create a new node
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    // If the position is greater than the length of the list, insert at tail
    if (newNode->next == nullptr)
    {
        tail = newNode;
        return;
    }
}
void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp; // Free memory of the deleted node
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = nullptr;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = nullptr; // Disconnect the node from the list
        if (curr == head)
        {
            head = curr->next; // Update head if the deleted node was the head
        }
        if (curr->next == nullptr)
        {
            // If the deleted node was the tail, update tail
            tail = prev; // This line is not needed as we are not maintaining tail in this function
        }
        delete curr;
    }
}
void printList(Node *&head)
{ // Function to print the linked list
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    // cout << "\ndata\t" <<node1-> data  << "\nnext\t" << node1->next << endl;
    Node *head = node1;     // head points to node1
    Node *tail = node1;     // tail also points to node1
    insertAtTail(tail, 20); // Inserting 20 at tail
    // insertAtTail(tail, 30);              // Inserting 30 at tail
    insertAtPosition(head, tail, 3, 40); // Inserting 30 at position 3
    insertAtPosition(head, tail, 4, 25); // Inserting 25 at position 5
    printList(head);                     // Print the linked list
    deleteNode(head, tail, 4);

    printList(head);
    cout << "Head: " << head->data << endl; // Print head data
    cout << "Tail: " << tail->data << endl; // Print head data
}