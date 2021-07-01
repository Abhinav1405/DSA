#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans1(int ar1[],int ar2[],int n,int m,int f){
    int ans;
 if(f>=n){
        ans=ar2[f-n];
    }
    else{
        ans=ar1[f];
    }
return ans;
}



int main(){
int ar1[]=  {2, 3, 5, 8};
int ar2[] = {10, 12, 14, 16, 18, 20};
     int n=4;
     int m=6;
int j=n-1;
int i=0;
while(ar1[j]>ar2[i]&&j!=-1&&i!=m){
    swap(ar1[j],ar2[i]);
    j--;
    i++;
}
int ans;
sort(ar1,ar1+n);
sort(ar2,ar2+m);
int k=(n+m);
if(k%2!=0){
    int f=k/2;
   ans= ans1(ar1,ar2,n,m,f);
}
else{
        int f=k/2;
int a=ans1(ar1,ar2,n,m,f);
int b=ans1(ar1,ar2,n,m,f-1);
ans=(a+b)/2;

  }
return ans;
}

