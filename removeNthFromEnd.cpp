ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t=head;
        ListNode* e=head;
        int i=0;
        while(t->next){
            i++;
            if(i>n) e=e->next;
            t=t->next;
        }
        if(n>i) head=head->next;
        else if(n==1) e->next=nullptr;
        else e->next=e->next->next;
        return head;
    }
