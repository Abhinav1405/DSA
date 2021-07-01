class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]

    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    { unordered_map<int,int>map;
    sort(arr,arr+N);
     int max=0;
     int f=0;
     for(int i=0;i<N-1;i++){
     if(arr[i+1]-arr[i]==1){
         f++;
         if(max<f){
             max=f;
         }
     }
     else if(arr[i+1]-arr[i]==0){
         continue;
     }
     else{
         f=0;
     }


     }
    return max+1;
      //Your code here
    }
};
