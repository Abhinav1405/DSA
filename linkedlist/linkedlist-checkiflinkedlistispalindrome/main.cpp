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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {Node*temp=head;
    Node*revtail=NULL;
  Node*revhead=NULL;
  int count=0;
  Node*fast=head;

    while(fast!=NULL&&fast->next!=NULL){
  count++;
  fast=fast->next->next;
        Node* newnode=new Node(temp->data);
        temp=temp->next;
        if(revhead==NULL){
            revhead=newnode;
            revtail=newnode;
        }
        else{
            revtail->next=newnode;
            revtail=revtail->next;
        }
    }
    reverse(revhead);
//    temp=head;
if(fast==NULL){
   fast=NULL;
}
else{
     temp=temp->next;
  //  count--;
}
    while(count--&&temp!=NULL&&revhead!=NULL){
        if(temp->data!=revhead->data){
            return false;
        }
        temp=temp->next;
        revhead=revhead->next;
    }
    return true;//Your code here
    }
};


