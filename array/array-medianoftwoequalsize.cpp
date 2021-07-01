class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{int sum=0;
		 int n=v.size();
		 sort(v.begin(),v.end());
		 if(n%2==0){
		     sum=(v[n/2-1]+v[(n/2)])/2;
		 }
		 else{
		     sum=v[n/2 ];
		 }
		 return sum;
		 	}
};
