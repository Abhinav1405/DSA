
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {Node* slow=head;
    Node* fast=head;
    int k=0;
    int count=0;
while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    count++;
    fast=fast->next->next;
    if(fast==slow){
        k++;
        break;
    }
}
    if(k==0){
        return ;
    }
    if(slow==head){
        count--;
        while(count--){
            slow=slow->next;
            
        }
        slow->next=NULL;
        return;
    }
    
 slow=head;
 
 while(slow->next!=fast->next){
    slow=slow->next;
    fast=fast->next;
}

fast->next=NULL;



    }
};