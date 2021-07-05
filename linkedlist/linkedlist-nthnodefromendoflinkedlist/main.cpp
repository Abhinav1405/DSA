int getNthFromLast(struct Node *head, int n)
{struct Node* temp=head;
struct Node* temp1=head;
int k=n;
while(k&&temp1!=NULL){
    temp1=temp1->next;
    k--;
}
    while(temp1!=NULL){
temp=temp->next;
temp1=temp1->next;
    }
    if(k!=0){return -1;

    }
    return temp->data;
}
