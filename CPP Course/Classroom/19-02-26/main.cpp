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

void printAllVal(node*head) {
    node*temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int getSize(node*head) {
    int len = 0;
    node*temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main() {
    node*head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    printAllVal(head);

    cout << endl << getSize(head);
}