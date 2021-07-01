class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int sum=-pow(10,7);
        int current=0;
        for(int i=0;i<n;i++){
            current+=arr[i];
            if(current>sum){
                sum=current;
            }
            if(current<0){
                current=0;
            }
        }
        // Your code here
        return sum;
    }
};