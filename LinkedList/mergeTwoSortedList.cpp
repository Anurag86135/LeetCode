#include<iostream>
using namespace std;


class ListNode{
    public :
    int val;
    ListNode *next;

    ListNode(int x){
        val=x;
        next=NULL;
    }
};

class Solution{
    public:

    ListNode* mergeTwoLists(ListNode* head1,ListNode * head2){
        if(head1 == NULL || head2 == NULL){

            return head1 == NULL ? head2 : head1;

        }
        // Case1
        if(head1->val <= head2->val){
            head1->next = mergeTwoLists(head1->next,head2);
            return head1;
        }else{
            head2->next = mergeTwoLists(head1,head2->next);
            return head2;
        }

    }
};
// Print Linked list

void printList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    ListNode*head1=new ListNode(1);
    head1->next =new ListNode(3);
    head1->next->next= new ListNode(5);

    ListNode* head2 = new ListNode(2);
    head2->next =new ListNode(4);
    head2->next->next =new ListNode(6);

    Solution obj;

    ListNode* mergedHead =obj.mergeTwoLists(head1,head2);

    cout<<"Merged Linked List: ";
    printList(mergedHead);

    return 0;
}