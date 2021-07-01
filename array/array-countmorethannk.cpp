class Solution
{
    public:
    unordered_map<int,int>map;
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        for(int i=0;i<n;i++){
            if(map.count(arr[i])>0){
                map[arr[i]]++;
            }
            else{
                map[arr[i]]=1;
            }
        }
    int count=0;
        for(auto it: map){
            if(it.second>(n/k)){
                count++;
            }
            
        }
        return count;
    }
};