class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
       int start=intervals[0][0];
    int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
         if(end>=intervals[i][0]){
             if(end>=intervals[i][1]){
                 continue;
             }
             else{
                 end=intervals[i][1];
             }
         }
            else{
                vector<int>s;
                
                s.push_back(start);
                s.push_back(end);
            v.push_back(s);
                start=intervals[i][0];
                end=intervals[i][1];
            }
            
                
            
        }
        vector<int>s;
                
                s.push_back(start);
                s.push_back(end);
            v.push_back(s);
    return v;
    }
};