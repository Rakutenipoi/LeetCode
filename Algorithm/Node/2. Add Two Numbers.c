#include <stdlib.h>
#define TEN 10
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* node1 = l1, *node2 = l2;
    struct ListNode* head, *temp;
    int flag = 0;
    temp = l1;
    head = temp;
    
    while(node1 && node2 && node1->val && node2->val){
    	if(node1->val + node2->val >= TEN){
    		temp->val = (node1->val + node2->val) % 10;
            if(flag) temp->val += 1;
    		temp = temp->next;
    		flag = 1;
		}
		else{
			temp->val = node1->val + node2->val;
			if(flag){
                temp->val += 1;
                flag = 0;
            }
            temp = temp->next;
		}
    	node1 = node1->next;
    	node2 = node2->next;
	}
	
	return head;
}
