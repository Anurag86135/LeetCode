// Detect linked list is cyclic or not

#include<iostream>
using namespace std;

// definition of linkedList

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }

};

class Solution{
    public:
    bool hasCycle(ListNode *head){
        ListNode* slow =head;
        ListNode* fast =head;

        while(fast !=NULL && fast -> next != NULL){
            slow = slow -> next ; // move 1 step
            fast = fast ->next->next ;// move 2 steps

            if(slow == fast){
                return true;
            }
        }
        return 0;
}


};

int main(){
    // Create Linked list

    ListNode* head =new ListNode(1);
    head->next =new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next =new ListNode(4);

    // For cycle
    // head->next->next->next->next = head->next;


    Solution obj;

    if(obj.hasCycle(head)){
        cout<<"Cyclic detected : "<<endl;

    }
    else{
        cout<<"No cycle "<<endl;
    }
    return 0
}