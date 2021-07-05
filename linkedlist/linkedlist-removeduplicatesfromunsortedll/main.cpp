class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head)
    {Node* temp=head;
        unordered_map<int,int> map;
        while(temp!=NULL){
        map[temp->data]++;
        temp=temp->next;
    }
    temp=head;
    map.erase(head->data);
    while(temp!=NULL && temp->next!=NULL){
         if(map.count(temp->next->data)>0){
             map.erase(temp->next->data);
              temp=temp->next;
         }
         else{
             temp->next=temp->next->next;
         }

    }
    return head;
     // your code goes here
    }
};
