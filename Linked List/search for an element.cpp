class Solution {
  public:
    bool searchKey(int n, Node* head, int key) {
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data==key)return true;
                temp=temp->next;
        }
    return false;
    }
};