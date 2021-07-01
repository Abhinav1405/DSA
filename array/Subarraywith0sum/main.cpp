class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {unordered_map<int,int>map;
    int sum=0;
    int i=0;
    while(i<n){
        sum=sum+arr[i];
        if(sum==0||arr[i]==0||map.count(sum)>0){
            return true;
        }
        else{
            map[sum];
        }
        i++;
    }
        return false;
        }
};
