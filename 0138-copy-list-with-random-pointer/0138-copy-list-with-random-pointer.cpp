/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode; 
            tail = newNode;
            return;
        }else{
            tail -> next = newNode;
            tail = newNode; 
        }
        
    }
public:
    Node* copyRandomList(Node* head) {
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        
        Node* temp = head;
        
        while(temp){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp -> next;
        }
        
        unordered_map<Node*, Node*> mapping;
        
        
        Node* og = head;
        
        Node* temp2 = cloneHead;
        
        while(og != NULL && temp2 != NULL){
            mapping[og] = temp2;
            og = og -> next;
            temp2 = temp2 -> next;
        }
        
        og = head;
        temp2 = cloneHead;
        
        
        while(og){
            temp2 -> random = mapping[og -> random];
            og = og -> next;
            temp2 = temp2 -> next;
        }
        
        return cloneHead;
        
    }
};