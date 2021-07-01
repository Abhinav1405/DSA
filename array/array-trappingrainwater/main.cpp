class Solution{
 // Function to find the trapped water between the blocks.
    public:


    int trappingWater(int arr[], int n){
         unordered_map<int,int>rightmin;
int max=INT_MIN;
for(int i=n-1;i>=0;i--){
    if(max<arr[i]){
        max=arr[i];
    }
    rightmin[i]=max;
}
int sum=0;
max=INT_MIN;
for(int i=0;i<n;i++){
    if(max<arr[i]){
    max=arr[i];}
 if((min(max,rightmin[i])-arr[i])<0){
     continue;
 }
 else{
    sum=sum+ min(max,rightmin[i])-arr[i];
 }
}

return sum;

    }
};
