struct Node* reverseDLL(struct Node * head)
{ struct Node*temp=head;
    while(temp!=NULL){
        if(temp->next==NULL){
            head=temp;
        }
        struct Node*f=temp->next;
        temp->next=temp->prev;
        temp->prev=f;
        temp=temp->prev;

    }
    return head;
}
