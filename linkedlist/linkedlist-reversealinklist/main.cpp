#include <iostream>

using namespace std;
class Node{
public:
    Node* next;
    int data;
    Node( int data){
    this->data=data;
    next=NULL;}


};
Node* takeinput(){
    int data;
cin>>data;
Node* head=NULL;
Node*tail=NULL;
while(data!=-1){
Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=tail->next;
    }
    cin>>data;
}

return head;



}
void print(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}
int main()
{
Node *head= takeinput();
Node* curr=head;
Node* prev=NULL;
Node* nex=head->next;
while(nex!=NULL){
    nex=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;
}
print(prev);
}

