#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

int findLength(node*head){
    int len = 0;
    node*temp = head;
    while(temp != nullptr){
        len++;
        temp = temp->next;
    }
    return len;
}

int main() {
    node*head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    cout << findLength(head);
}