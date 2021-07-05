void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{ *head1_ref=head;
Node*fast=*head1_ref;
Node* slow=*head1_ref;
while(fast->next!=head&&fast->next->next!=head){
    fast=fast->next->next;
    slow=slow->next;
}
*head2_ref=slow->next;
slow->next = head;

    Node *curr = *head2_ref;

    while(curr->next != head)
    {
        curr=curr->next;
    }

    curr->next = *head2_ref;
}
