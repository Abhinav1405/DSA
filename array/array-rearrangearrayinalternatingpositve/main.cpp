#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
int n=10;
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<0&&j<n&&arr[j]>0){
        swap(arr[j],arr[i]);
     cout<<arr[j]<<arr[i]<<endl;
        j=j+2;
        i=i+1;

    }
    else if(arr[j]<0){
       j= j+2;
        i--;
    }
}
for(int i=0;i<n;i++){cout<<arr[i];
}
}
