int countTriplets(struct Node* head,int x){
unordered_map<int,int>map;
struct Node* temp=head;
int count=0;
while(temp!=NULL){
    map[temp->data];
    temp=temp->next;

}
temp=head;
while(temp!=NULL&&temp->next!=NULL){
    map.erase(temp->data);
    struct Node*f=temp->next;
    while(f!=NULL){
        map.erase(f->data);
        if(map.count(x-(temp->data)-(f->data))>0){
            count++;
        }
        map[f->data];
        f=f->next;
    }
  temp=temp->next;
}
 return count;
}
