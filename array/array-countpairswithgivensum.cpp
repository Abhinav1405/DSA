class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
unordered_map<int,int>map;
  int count=0;
  for(int i=0;i<n;i++)
{
   if(map.count(k-arr[i])>0){
       count=count+map[k-arr[i]];
   }
   map[arr[i]]++;
    
}   
return count;// code here

    }
};