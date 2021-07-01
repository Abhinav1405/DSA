class Solution {
public:
void multiply(vector<int>&v,int n){
int carry=0;
for(auto it=v.begin();it!=v.end();it++){
int product=(*it)*n+carry;
*it=product%10;
carry=product/10;
}
while(carry){
    int k=carry%10;
    v.push_back(k);
    carry=carry/10;
}

}
    vector<int> factorial(int N){
     vector<int>v;
     v.push_back(1);
     for(int i=2;i<=N;i++){
         multiply(v,i);
     }

     reverse(v.begin(),v.end());
     return v;

        // code here
    }
};
