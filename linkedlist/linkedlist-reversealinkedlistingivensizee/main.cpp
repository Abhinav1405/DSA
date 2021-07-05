class Solution
{ struct node* reverses(struct node* head){
    struct node*prev=NULL, *nxt,*current=head;
    while(current!=NULL){
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }
    return prev;
}
    public:
    struct node *reverse (struct node *head, int k)
    {
     int count=1;
     struct node*temp=head;
     while(count!=k &&temp!=NULL){
         temp=temp->next;
         count++;
     }
     if(temp==NULL){
         return reverses(head);
     }
     struct node*head2=temp->next;
     temp->next=NULL;
     head=reverses(head);
     temp=head;
     while(temp->next!=NULL) temp=temp->next;
     temp->next=reverse(head2,k);
     return head;
        // Complete this method
    }
};
