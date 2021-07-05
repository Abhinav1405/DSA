
class Solution
{
    public:
    Node *compute(Node *head)
    {if(head==NULL||head->next==NULL){
        return head;
    }
    int k=0;
        Node* temp=head->next;
    Node*prev=head;

    while(temp!=NULL&&temp->next!=NULL){
if(temp->data<temp->next->data){
    prev->next=temp->next;
    temp=prev->next;
    k++;
}
else{
    prev=temp;
    temp=temp->next;
}


    }
    if(head->data<head->next->data){
        head=head->next;

        k++;
    }
    if(k!=0){head=compute(head);};
    return head;
}
};
