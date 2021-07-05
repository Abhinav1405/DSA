void reverse(Node *h)
{
Node *a,*b;
for(a=h;a!=NULL;a=a->next)
{
for(b=a->next;b!=NULL;b=b->next)
{
int temp=a->data;
a->data=b->data;
b->data=temp;
}
}
}
// Returns new head of linked List.
Node *addOne(Node *head)
{
Node *c,*d;
reverse(head);
c=head;
if(c->data<9)
{
c->data=c->data+1;
}
else
{
c->data=c->data+1;
while(c->next!=NULL)
{
if(c->data==10)
{
c->data=0;
c->next->data=c->next->data+1;
c=c->next;
}
else
{
break;
}
}
}
reverse(head);
return head;
}
