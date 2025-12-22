//1.ListNode ki Defination (linked list ka structure)

class ListNode{
    int val;

    ListNode next;
    ListNode(){};
    ListNode(int val)
    {this.val=val;}
    ListNode(int val,ListNode next){
        this.val=val;
        this.next=next;
    }
}
public class LeetCode2{
    public ListNode addTwoNumbers (ListNode l1,ListNode l2){
        ListNode head=null;
        ListNode temp=null;
        int carry =0;
        while(l1!=null||l2!=null||carry!=0){
            int val1=(l1==null)?0:l1.val;
            int val2=(l2==null)?0:l2.val;
            int value=val1+val2+carry;
            ListNode newNode =new ListNode(value%10);
            carry=value/10;

            if(head ==null){
                head =newNode;
                temp=newNode;
            }else{
                temp.next =newNode;
                temp=temp.next;
            }
            if(l1!=null){
                l1=l1.next;
            }
            if(l2!=null)l2=l2.next;

            
        }
        return head;
    }
    //Array se linkedList banane ke liye

    public static ListNode buildList(int[] nums) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        for (int num : nums) {
            current.next = new ListNode(num);
            current = current.next;
        }
        return dummy.next;}

    //Helpher Method :List ko print karne ke liye
    public static void printList(ListNode node){
        while(node!=null){
            System.out.print(node.val);
            if(node.next!=null) 
                System.out.print("->");
            node=node.next;

        }
    System.out.println();
}

// 4. Main Method: Program yahan se start hoga
public static void main(String[] args) {
        LeetCode2 solution = new LeetCode2();

        // Input 1: (2 -> 4 -> 3)  (Matlab number 342)
        int[] arr1 = {2, 4, 3};
        ListNode l1 = buildList(arr1);

        // Input 2: (5 -> 6 -> 4)  (Matlab number 465)
        int[] arr2 = {5, 6, 4};
        ListNode l2 = buildList(arr2);

        System.out.println("Input List 1:");
        printList(l1);
        System.out.println("Input List 2:");
        printList(l2);

        // Function call
        ListNode result = solution.addTwoNumbers(l1, l2);

        System.out.println("Result (Sum):");
        printList(result); // Expected: 7 -> 0 -> 8 (Matlab 807)
    }
}
