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

void insertFront(node*&head, int val){
    node*temp = new node(val);
    temp->next = head;
    head = temp;
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

    insertFront(head, 5);

    printAllVal(head);
}