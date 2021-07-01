class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long f;
    long long min=pow(10,5);
    sort(a.begin(),a.end());
    for(long long int i=0;i<n-m+1;i++)
{     f=a[m-1+i]-a[0+i];
if(min>f){
    min=f;
}
}    return min;
    }
};
