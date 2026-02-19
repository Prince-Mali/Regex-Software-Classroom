#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void deleteAtEnd(node*&head) {
    node*temp = head;
    node*last = head;
    while(last->next != NULL){
        temp = last;
        last = last->next;
    }
    delete(last);
    temp->next = NULL;
}

void printAllVal(node*head) {
    node*temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    node*head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    deleteAtEnd(head);
    printAllVal(head);
}
