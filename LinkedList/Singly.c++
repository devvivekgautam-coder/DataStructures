#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next; 
};

int main () {
    Node* head = new Node();
    head->data = 10;

    Node* second = new Node();
    head->data = 20;

    Node* third = new Node();
    head->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    
    return 0;
}