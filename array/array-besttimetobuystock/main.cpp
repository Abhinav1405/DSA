class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int min=1000000;
        for(int i=0;i<prices.size();i++)
        { cout<<i;
            if(prices[i]<min){
  min=prices[i];
            }
            else if(max< prices[i]-min){
                max=prices[i]-min;

                }
        }
        return max;
    }
};
