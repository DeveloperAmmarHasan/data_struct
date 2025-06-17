#include <iostream>
using namespace std;

class Node
{ // Node class to represent each node in the doubly linked list
public:
    int data;
    Node *next;
    Node *prev; // Pointer to the previous node
    // Constructor to initialize a new node
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
    ~Node() {
        int value = this->data;
        if(next!=nullptr){
            delete next;
            next = nullptr;
        }
    }
};
void insertAtHead(Node* &head,Node* &tail,int data) {
    // If the list is empty, create a new node and set it as head
    if(head == nullptr) {
        Node *temp = new Node(data);
        head = temp;
        tail = temp; // If the list was empty, set tail to the new node as well
    }
    else {
        // Function to insert a new node at the head of the doubly linked list
        Node *temp = new Node(data);
        temp->next = head; // Point the next of new node to head
        head->prev = temp; // Set the previous of head to new node
        head = temp; // Update head to point to new node
    }
}
void insertAtTail(Node* &head,Node* &tail, int data) {
    // If the list is empty, create a new node and set it as tail
    if(tail == nullptr) {
        Node *temp = new Node(data);
        tail = temp;
        head = temp; // If the list was empty, set head to the new node as well
    }
    else{
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while(count < position -1) {
        temp = temp->next;
        count++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next; // Point new node's next to temp's next
    temp->next->prev = newNode; // Set the previous of temp's next to new node
    temp->next = newNode; // Point temp's next to new node
    newNode->prev = temp; // Set the previous of new node to temp

}
void deleteNode(Node* &head,Node* &tail, int position){
    if(head == nullptr) return; // If the list is empty, do nothing
    //deleting first or start node 
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = nullptr;

        int count = 1;
        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = nullptr;
        prev->next = curr->next;
        curr->next = nullptr;
        tail = prev; // Update tail if the deleted node was the last node
        delete curr;
    }
}
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != nullptr)
    {   
        length++;
        temp = temp->next;
    }
    return length;
}
int main()
{
    Node *node1 = new Node{10};
    Node *head = node1;
    Node *tail = node1;; 
    // insertAtHead(head,tail,20); // Inserting 20 at head
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    printList(head);
    // insertAtPosition(head, tail, 1, 25); // Inserting 25 at position 2

    deleteNode(head,tail,5);
    printList(head);
    cout << "tail :\t" <<tail->data << endl;
}