class Solution {
public:
    unordered_map<int,int>map;
    int findDuplicate(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])>0){
                f=nums[i];
                return f;
            }
            else{
                map[nums[i]]=0;
            }
        }
        return f;
    }
};
