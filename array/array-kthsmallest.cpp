#include<bits/stdc++.h>
using namespace std;
priority_queue<int>maxheap;
int main(){
int n;
int k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<n;i++)
{
    maxheap.push(a[i]);
    if(maxheap.size()>k){maxheap.pop();}
}
cout<<maxheap.top();

}







