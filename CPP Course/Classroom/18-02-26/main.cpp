// Linked List --

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void printAllVal(Node*head){
    Node*temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null";
}

int main() {
    Node*head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Node*temp = head;
    // while(temp != nullptr){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    printAllVal(head);
}
