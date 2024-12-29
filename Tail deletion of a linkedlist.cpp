#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteTail(Node* head) {
    // check for empty linked list or single element in the linked list
    if (head == NULL || head->next==NULL) return head;
    // For more than one element 
    Node* temp = head;
    //temp->next - last element
    //temp->next->next - second last element
    while(temp->next->next != NULL){
        //check whether the element is last or not
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main() {
    vector<int> arr = {12, 8, 5, 7};
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    cout << "Original LL: ";
    printLL(head);
    cout << endl;

    head = deleteTail(head);

    cout << "LL after deletion of Tail ";
    printLL(head);
    cout << endl;

    return 0;
}
