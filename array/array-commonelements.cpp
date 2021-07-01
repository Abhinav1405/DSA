class Solution
{
    public:  
    unordered_map<int,int>map;
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        { vector<int> v;
        int j=0;
            for(int i=0;i<n1;i++){
                map[A[i]]=0;
            }
            for(int i=0;i<n2;i++){
                if(map.count(B[i])>0)    {map[B[i]]=1;
                    j++;
                };
                
            }
            for(int i=0;i<n3;i++){
                if(map.count(C[i])>0)    {
                    map[C[i]]++;
                if(map[C[i]]<2){
                    map[C[i]]=0;
                }
                    
                    
                };
                        }
            //code here.
        
        for(auto it:map){
          if(it.second>=2){
              v.push_back(it.first);
          }



        }
    sort(v.begin(),v.end());
        return v;
        }

};