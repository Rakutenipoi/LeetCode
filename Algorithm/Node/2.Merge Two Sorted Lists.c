/**
 * Definition for singly-linked list.
 * */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1 = l1, *p2 = l2;
    struct ListNode *head, *temp;
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));//·ÖÅäÄÚ´æ
    head = temp;
    while(p1 && p2){
        if(p1->val <= p2->val){
            temp = temp->next = p1;
            p1 = p1->next;
        }
        else{
            temp = temp->next = p2;
            p2 = p2->next;
        }
    }
    temp->next = p1?p1:p2;

    return head->next;
}

