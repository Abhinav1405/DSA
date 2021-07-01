#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1, 2, 3, -4, -1, 4};
int n=6;
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<0){
        swap(arr[j],arr[i]);
        j++;
    }
}
for(int i=0;i<n;i++){cout<<a[i];
}
}
