// basic layout of a linked list

#include <bits/stdc++.h>
using namespace std;


// Creating a class or structure
struct Node{
// Generating the blueprint 
  public:
    int data;
    Node* next;
// assigning value to the heap memories location
  public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout<<y;
}
