    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode* head=nullptr;
        while(l1 || l2 || c)
        {
            int s=c;
            c=s/10;
            ListNode* node=new ListNode(s%10);
            if(head==nullptr) {head=node; tail=node;}
        ListNode* tail=nullptr;
            if(l1)
            {
                s+=l1->val;
            }
                l1=l1->next;
            if(l2)
            {
                s+=l2->val;
                l2=l2->next;
            }
            else {tail->next=node; tail=tail->next;}
        }
        return head;
    }
};
