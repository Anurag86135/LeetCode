#include<iostream>
using namespace std;

// Definition of ListNode

class ListNode{

    public:
    int val;
    ListNode * next;

    ListNode(int x){
        val =x;
        next=NULL;
    }
};

// Function to reverse LinkedList

ListNode * reverseList(ListNode*head){
    ListNode* prev =NULL;
    ListNode* curr = head;
    ListNode* next =NULL;

    while(curr!=NULL){
        next =curr->next;  // Store next node
        curr ->next =prev;//reverse the currents node's pointer

        prev=curr; // Move prev and curr one step forward   
        curr=next;
    }
    return prev; // At the end, prev will be the new head of the reversed list
}

// Helper function to print the linked list

void printList(ListNode* head){
    while(head != NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    ListNode* head =new ListNode(1);
    head->next =new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);

    cout<<"Original List: ";
    printList(head);

    // Reverse  ListNode

    head =reverseList(head);

cout<<"ReverseList: ";
printList(head);
return 0;
}
