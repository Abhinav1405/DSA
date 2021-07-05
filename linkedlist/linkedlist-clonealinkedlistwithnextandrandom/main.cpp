Node *copyList(Node *head) {
    // Your code h
    unordered_map<Node*,Node*>copy;

    Node*temp=head;
    while(temp!=NULL){
        Node*f=new Node(temp->data);
        copy[temp]=f;
        temp=temp->next;
    }
    temp=head;
    Node*head1=copy[temp];
    Node* tail=copy[temp];
    // head->arb=copy[temp->arb];
 temp=temp->next;
while(temp!=NULL){
    tail->next=copy[temp];
    tail=tail->next;
    temp=temp->next;

}

temp=head;
tail=head1;
while(temp!=NULL){
    tail->arb=copy[temp->arb];
    tail=tail->next;
    temp=temp->next;
}


    return head1;
    }
    s
