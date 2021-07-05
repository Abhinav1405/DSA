#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int data){
this->data=data;
next=NULL;
}


};
Node* takeinput(){
int data;
cin>>data;
Node* head=NULL;
Node* tail=NULL;
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
Node* tail=head;
while(tail!=NULL){
    cout<<tail->data;
    tail=tail->next;


}
}

Node* reversell(Node*head){
    Node*temp;
if(head!=NULL&&head->next!=NULL)
{
temp=reversell(head->next);
head->next->next=head;
head->next=NULL;
}
else{
    return head;
}
return temp;

}
int main(){
Node* head= takeinput();
Node* head1=reversell(head);
print(head1);


}
